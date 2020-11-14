#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >> n ;
    vector<ll> cur(n+1) ;
    vector<ll> step(n+1) ;
    ll cumsum = 0 ;
    for(int i=1;i<=n;i++){
        ll a ;
        cin >> a ;
        cumsum += a;
        cur[i] = cur[i-1] + cumsum ;
        step[i] = max(step[i-1],cumsum) ;
    }
    //cout << cur[n] << endl ;

    ll ans = 0 ;
    for(int i=1;i<=n;i++){
        ans = max(cur[i-1]+step[i],ans) ;
    }
    cout << ans << endl ;

 return 0 ;
}  
