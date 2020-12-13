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
    int ans = 0 ;
    int a[n] ;
    rep(i,n){
        cin >> a[i] ;
    }

    rep(i,n){
        if((a[a[i]-1]-1)==i)ans++ ;
    }
    cout << ans/2 << endl ;
 return 0 ;
}  
