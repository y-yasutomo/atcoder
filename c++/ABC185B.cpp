#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    ll n,m,t ;
    ll nmax ;
    cin >> n >> m >> t ;
    nmax = n ;
    ll a[m+1],b[m+1] ;
    a[0]=0;
    b[0]=0;
    for(int i=1;i<=m;i++){
        cin >> a[i] >> b[i] ;
    }

    for(int i=0;i<m;i++){
        n-= (a[i+1]-a[i]) ;
        if(n<=0){
            cout << "No" << endl ;
            return 0 ;
        }
        n+= (b[i+1]-a[i+1]) ;
        n = min(n,nmax) ;
        //cout << n << endl ;
        a[i+1] = b[i+1] ;
    }
    //cout << n << endl ;
    n -= (t-b[m]) ;
       // cout << n << endl ;
        if(n<=0){
            cout << "No" << endl ;
            return 0 ;
        }
    cout << "Yes" << endl ;

 return 0 ;
}  
