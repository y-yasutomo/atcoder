#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)


const int lim = 1e9 ;

int n,m,K ;
int a[110],b[110] ;
int c[110],d[110] ;
int dish[110] ;
int ans = 0 ;

void dfs(int k){
    if(k==K+1){
        int temp = 0 ;
        for(int j=1;j<=m;j++){
            if(dish[a[j]]>0 && dish[b[j]]>0){
                temp++ ;
            }
        }
            ans = max(ans,temp) ;
            return  ;
    }
    dish[c[k]]++ ;
    dfs(k+1) ;
    dish[c[k]]-- ;
    dish[d[k]]++ ;
    dfs(k+1) ;
    dish[d[k]]-- ;
}

int main() {
    cin >> n >> m ;
    for(int i=1;i<=m;i++){
        cin >> a[i] >> b[i] ;
    }
    cin >> K ;
    for(int i=1;i<=K;i++){
        cin >> c[i] >> d[i] ;
    }
    dfs(1) ;
    cout << ans << endl ;
 return 0 ;
}  