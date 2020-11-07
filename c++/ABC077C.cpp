#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >>  n ;
    vector<ll> a(n) ;
    vector<ll> b(n) ;
    vector<ll> c(n) ;
    rep(i,n){
        cin >> a[i] ;
    }
    rep(i,n){
        cin >> b[i] ;
    }
    rep(i,n){
        cin >> c[i] ;
    }

    sort(a.begin(),a.end()) ;
    sort(b.begin(),b.end()) ;
    sort(c.begin(),c.end()) ;

    ll ans = 0 ;

    rep(i,n){
        auto idx = upper_bound(c.begin(),c.end(),b[i])-c.begin() ;
        //cout << idx << endl ;
        auto idx2 = lower_bound(a.begin(),a.end(),b[i])-a.begin() ;
        //cout << idx2 << endl ;
        //cout << (c.size()-idx)*(a.size()-idx2) << endl ;
        ll temp = (idx==c.size() ? 0 : c.size()-idx)*idx2 ;
        ans+= temp ;
        //cout <<  lower_bound(b.begin(),b.end(),c[i])-b.begin() << endl ;
    }
    cout << ans << endl ;
    
 return 0 ;
}  
