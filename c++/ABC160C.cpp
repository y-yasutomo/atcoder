#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int k,n ;
    cin >> k >> n ;
    vector<int> a(n) ;
    rep(i,n) cin >> a[i] ;

    vector<int> b(n) ;
    for(int i=0;i<n-1;i++){
         b[i] = a[i+1]-a[i] ;
    }
    //b[0] = min(b[0],a[0]) ;
    b[n-1] = k-a[n-1]+a[0] ;
    //cout << b[0] << " " << b[n-1] << endl ;
    int ans = 0 ;
    sort(b.begin(),b.end()) ;
    for(int i=0;i<n-1;i++){
         ans+= b[i] ;
    }

    cout << ans << endl ;

 return 0 ;
}  
