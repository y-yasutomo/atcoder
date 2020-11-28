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

ll gcd(ll x,ll y){
    return y ? gcd(y,x%y) : x ;
}
ll max(ll a,ll b){
    return (a>b) ? a : b ; 
}

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

int main() {
    ll a,b ;
    cin >> a >> b ;
    ll temp = gcd(a,b) ;
    vector<pair<ll,ll>> ans  ;
    ans = prime_factorize(temp) ;
    cout << ans.size()+1 << endl ;
 return 0 ;
}  
