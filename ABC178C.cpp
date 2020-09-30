#include <iostream>
#include <algorithm>
#include <queue>

#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;
const ll mod = 1e9+7 ;

ll powmod(ll x,ll y){
    ll res = 1 ;
    for(int i=0;i<y;i++){
        res = res*x%mod ;
    }
    return res ;
}

int main() {

    ll n ;
    cin >> n ;

    ll ans = powmod(10,n)-powmod(9,n)-powmod(9,n)+powmod(8,n) ;
    ans %= mod ;
    cout << (ans+mod)%mod << endl ;

    return 0 ;
}