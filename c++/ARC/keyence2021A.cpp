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

int main() {
    int n ;
    cin >> n ;
    vector<ll> a(n),b(n) ;
    rep(i,n) cin >> a[i] ;
    rep(i,n) cin >> b[i] ;
    vector<ll> c(n) ;
    ll tempa = a[0] ;
    ll tempb = b[0] ;
    c[0] = tempa * tempb ;
    for(int i=1;i<n;i++){
        tempa = max(tempa,a[i]) ;
        //tempb = max(tempb,b[i]) ;
        c[i] = max(tempa * b[i],c[i-1]) ;
    }

    rep(i,n){
        cout << c[i] << " " ;
    }
    cout << endl ;
 return 0 ;
}  
