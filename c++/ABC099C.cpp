#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int main() {
    int n ;
    cin >> n ;
    int dp[n+1] ;
    rep(i,n+1){
        dp[i] = 1e9 ;
    }
    dp[0] = 0 ;

    for(int i=0;i<=n;i++){
        int power = 1 ;
        while(i-power>=0){
            dp[i] = min(dp[i-power]+1,dp[i]) ;
            power *= 6 ;
        }
        power = 1 ;
        while(i-power>=0){
            dp[i] = min(dp[i-power]+1,dp[i]) ;
            power *= 9 ;
        }
    }
    cout << dp[n]  << endl ;
 return 0 ;
}  