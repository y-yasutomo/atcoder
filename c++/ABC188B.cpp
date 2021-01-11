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
    int n ;
    cin >> n ;
    vector<int> a(n) ;
    vector<int> b(n) ;
    rep(i,n){
        cin >> a[i] ;
    }
    rep(i,n){
        cin >> b[i] ;
    }

    ll ans = 0 ;
    for(int i=0;i<n;i++){
        ans += a[i]*b[i] ;
    }

    if(ans==0){
        cout << "Yes" << endl ;
    }else{
        cout << "No" << endl ;
    }
 return 0 ;
}  
