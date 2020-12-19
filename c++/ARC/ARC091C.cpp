#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

ll max(ll a,ll b){
    return (a<b) ? b : a ;
}

int main() {
    ll n,m ;
    cin >> n >> m ;
    ll ans ;
    ll n_temp = max(0,n-2) ;
    ll m_temp = max(0,m-2) ;
    if(n<3 && m<3){
        if(n==1 && m==1){
            ans = 1 ;
        }else{
            ans = 0 ;
        }
    }else{
        if(n==2 || m==2){
            ans = 0 ;
        }else{
            ans = max(1,n-2)*max(1,m-2) ;
        }
    }
    cout << ans << endl ;
 return 0 ;
}  
