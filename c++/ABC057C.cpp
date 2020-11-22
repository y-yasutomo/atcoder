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

vector<ll> enum_div(ll N){
    vector<ll> res ;
    for(ll i=1;i*i<=N;i++){
        if(N%i==0){
            res.push_back(i) ;
            if(N/i!=i)res.push_back(N/i) ;
        }
    }
    sort(res.begin(),res.end()) ;
    return res ;
}


int main() {
    ll n ;
    cin >> n ;
    vector<vector<ll>> res(1e5) ;

    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            res[i].push_back(i) ;
            res[i].push_back(n/i) ;
        }
    }

    //cout << res[2].size() << endl ;
    int ans = 100 ;
    for(auto x : res){
        if(x.size()>0){
            int temp_ans = 0 ;
            for(auto y : x){
                ll temp = y ;
                int temp_keta = 0 ;
                while(temp>0){
                    temp/=10 ;
                    temp_keta++ ;
                }
                temp_ans = max(temp_keta,temp_ans) ;
            }
            ans = min(ans,temp_ans) ;
        }
    }

    cout << ans << endl ;
 return 0 ;
}  
