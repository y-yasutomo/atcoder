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

ll dp[110][100010] ;
int w[101],v[101] ;

int main() {
    int n,W ;
    cin >> n >> W ;
    int w[n],v[n] ;
    for(int i=1;i<=n;i++){
        cin >> w[i] >> v[i] ;
    }
    //int dp[n][w] ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            dp[i][j] = dp[i-1][j] ;
            if(j-w[i]>=0){
                dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]]+v[i]) ; 
            }
        }
    }
    cout << dp[n][W] << endl ;
 return 0 ;
}  