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

int n ;
int dp[100010][3] ;
int a[100010][3] ;

int main() {
    cin >> n ;
    for (int i = 1; i <= n; i++)
      for (int j = 0; j < 3; ++j) cin >> a[i][j];

    for(int i=1;i<=n;i++){
        //0-A 1-B 2-C
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j==k) continue ;
                dp[i][j] = max(dp[i][j],dp[i-1][k] + a[i][j]) ;
            }
        }
    }

    cout << max({dp[n][0],dp[n][1],dp[n][2]}) << endl ;

 return 0 ;
}  