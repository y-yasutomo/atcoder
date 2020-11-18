#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;

    ll ans = 1 ;
    ll a[n] ;
    rep(i,n){
        cin >> a[i] ;
        if(a[i]==0){
            cout << 0 << endl ;
            return 0 ;
        }
    }

    rep(i,n){
        if(a[i]>lim/ans){
            cout << -1 << endl ;
            return 0 ;
        }
        ans*=a[i] ;
    }

    cout << ans << endl;
 return 0 ;
}  
