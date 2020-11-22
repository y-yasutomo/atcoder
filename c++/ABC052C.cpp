#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll MOD = 1e9+7 ;

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
    ll n ;
    cin >> n ;
    vector<ll> ans(n+1,0) ;
    for(ll i=2;i<=n;i++){
        auto tmp = prime_factorize(i) ;
        for(auto x : tmp){
            ans[x.first]+=x.second ;
        }
    }

    ll out = 1 ;
    for(ll i=2;i<=n;i++){
        out*=(ans[i]+1) ;
        out%=MOD ;
    }
    cout << out << endl ;
 return 0 ;
}  
