#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

ll gcd(ll x,ll y){
    return y ? gcd(y,x%y) : x ;
}

ll lcm(ll x,ll y){
    return x*y/gcd(x,y) ;
}

int main() {
    ll n ;
    cin >> n ;

    ll ans ;
    ans = 2 ;

    for (ll i = 3; i <= n; i++)
    {
        ans = lcm(i,ans) ;        
    }
    cout << ans + 1 << endl ;
 return 0 ;
}  
