#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

vector<pair<ll,ll>> prime_factorize(ll N){
    vector<pair<ll,ll>> out ;
    for(ll i=2;i*i<=N;i++){
        if(N%i==0){
            ll cnt = 0 ;
            while(N%i==0){
                N/=i ;
                cnt++ ;
            }
            out.push_back({i,cnt}) ;
        }
    }
    if(N!=1)out.push_back({N,1}) ;
    return out ;
}

ll max(ll a,ll b){
    return (a>b) ? a : b ; 
}

int main() {
    ll n,p ;
    cin >> n >> p ; 
    vector<pair<ll,ll>> pr ;
    pr = prime_factorize(p) ;

    ll ans = 1 ;
    for(auto x  : pr){
        for(int j=0;j<x.second/n;j++){
            ans*=x.first ;
        }
    }
    cout << ans << endl ;
/*
    for(auto x  : pr){
        cout << x.first << " " << x.second << endl ;
    }
*/
 return 0 ;
}  
