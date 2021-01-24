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
    int n,k ;
    cin >> n >> k ;
    vector<int> h(n) ;
    vector<int> dp(n,lim) ;
    for(int i=0;i<n;i++)cin >> h[i] ;
    dp[0] = 0 ;

    for(int i=0;i<n-1;i++){
        for(int j=1;j<=k;j++){
            if(i+j<n)
            dp[i+j] = min(dp[i+j],dp[i]+abs(h[i]-h[i+j])) ;
        }
    }
    cout << dp[n-1] << endl ;
 return 0 ;
}  