#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n;
    cin >> n ;
    ll a,b ;
    vector<ll> y(n) ;
    ll yall = 0 ;
    rep(i,n){
        cin >> a >> b ;
        yall -= a ;
        y[i] = 2*a + b ;
    }
    sort(y.begin(),y.end(),greater<ll>()) ;
    
    int ans = 0 ;
    for(int i=0;i<n;i++){
        yall += y[i] ;
        ans++ ;
        if(yall>0){
            break ;
        }
    }
    cout << ans << endl ;
 return 0 ;
}
