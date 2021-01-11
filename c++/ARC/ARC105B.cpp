#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

ll gcd(ll x,ll y){
    return y ? gcd(y,x%y) : x ;
}

int main() {
    int n ;
    cin >> n ;
    vector<ll> a(n) ;
    rep(i,n) cin >> a[i] ;
    ll ans = gcd(a[0],a[1]) ;
    for (int i = 2; i < a.size(); i++){
        ans = gcd(ans,a[i]) ;
    }
    cout << ans << endl ;
 return 0 ;
}  
