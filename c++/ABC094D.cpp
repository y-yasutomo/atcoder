#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    vector<ll> a(n) ;
    rep(i,n)cin >> a[i] ;
    sort(a.begin(),a.end()) ;

    ll half = (a[n-1]+1)/2 ;
    ll ans = lim ;
    int idx ;
    rep(i,n){
        ll temp = abs(half-a[i]) ;
        if(temp<ans){
            ans = temp ;
            idx = a[i] ;
        }
    }
    cout << a[n-1] << " " << idx << endl ;
 
 return 0 ;
}  
