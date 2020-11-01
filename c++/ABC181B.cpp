#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >>  n  ;
    ll ans = 0 ;
    rep(i,n){
        ll a,b ;
        cin >> a >> b ;
        ll num = b-a+1 ;
        ans+= (num*(a+b))/2 ;
    }
    cout << ans << endl ;
 return 0 ;
}  
