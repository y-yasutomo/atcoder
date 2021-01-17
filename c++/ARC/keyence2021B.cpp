#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n,k ;
    cin >> n >> k ;
    map<int,int> mp ;
    //vector<ll> a(n) ;
    int nmax = 0 ;
    rep(i,n){
        int b ;
        cin >> b ;
        nmax = max(b,nmax) ;
        mp[b]++ ;
        //a.insert(b) ;
        //cin >> a[i] ;
    }
    //sort(a.begin(),a.end()) ;

    ll ans = 0 ;
    int idx = 0 ;
    int Min = mp[0] ;
    for(int i=0;i<=nmax;i++){
        Min = min(Min,mp[i]) ;
        if(mp[i]!=0){
            ans += min({mp[i],k,Min}) ; 
        }else{
            break ;
        }        
    }
    cout << ans << endl ; 
 return 0 ;
}  
