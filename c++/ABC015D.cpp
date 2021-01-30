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

int w ;
int n,k ;
int dp[55][55][11000] ;

int main() {
    cin >> w ;
    cin >> n >> k ;
    vector<int> a(n+1),b(n+1) ;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i] ;
    }

    for(int i=1;i<=n;i++){
        for(int kk=1;kk<=k;kk++){
            for(int j=1;j<=w;j++){
                dp[i][kk][j] = dp[i-1][kk][j] ;
                if(j-a[i]>=0){
                    dp[i][kk][j] = max(dp[i][kk][j],
                                       dp[i-1][kk-1][j-a[i]]+b[i]) ;
                }
            }
        }
    }

    int ans = 0 ;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=w;j++){
            ans = max(ans,dp[n][i][j]) ;
        }
    }
    cout << ans << endl ;
 return 0 ;
}  