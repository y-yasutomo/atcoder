#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    ll n,a,b ;
    cin >> n >> a >> b  ;
    if(a>b){
        cout << 0 << endl ;
    }else if(n==1){
        cout << (a!=b ? 0 : 1) << endl ;
    }else{
        ll ans = (n-2)*b-(n-2)*a+1 ;
        cout << ans << endl ;
    }
 return 0 ;
}  
