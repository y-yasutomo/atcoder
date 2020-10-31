#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 ll n ;
 cin >> n ;
 vector<ll> a(n) ;
 map<ll,ll> mp ;
 for(ll i=0;i<n;++i){
     cin >> a[i] ;
     mp[a[i]]++ ;
 }
 
 ll ans = 0 ;
 for(auto p : mp){
     ll x = p.first ;
     ll y = p.second ;
     if(x-y>0){
         ans+=y ;
     }else{
         ans+=y-x ;
     }
 }
 cout << ans << endl ;
 return 0 ;
}  
