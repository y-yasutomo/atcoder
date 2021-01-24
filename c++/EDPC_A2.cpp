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

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    vector<int> h(n) ;
    vector<int> dp(n) ;
    for(int i=0;i<n;i++)cin >> h[i] ;
    dp[1] = abs(h[0]-h[1]) ;

    for(int i=2;i<n;i++){
        dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]),dp[i-2] + abs(h[i]-h[i-2])) ;
    }

    cout << dp[n-1] << endl ;
 return 0 ;
}  