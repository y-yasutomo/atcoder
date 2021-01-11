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

int main() {
    int n ; 
    ll C ;
    cin >> n >> C ;
    map<int,ll> mp ;
    rep(i,n){
        int a,b,c ;
        cin >> a >> b >> c ;
        mp[a] += c ;
        mp[b+1] -= c ; 
    }
    ll ans = 0 ;
    ll s = 0 ;
    int pre = 0 ;
    for(auto x : mp){
        ans += min(C,s)*(x.first-pre) ;
        s += x.second ;
        pre = x.first ;
    }
    cout << ans << endl ;
 return 0 ;
}  
