#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    int np = int(pow(double(2),double(n))) ;
    //vector<pair<ll,ll>> a(np) ;
    vector<ll> a(np) ; 
    rep(i,np){
        cin >> a[i] ;
    }

    ll former = 0 ;
    ll latter = 0 ;
    for(int i=0;i<(np/2);i++){
        former = max(former,a[i]) ;
    }
    for(int i=(np/2);i<np;i++){
        latter = max(latter,a[i]) ;
    }

    ll target ;
    if(former>latter){
        target = latter ;
    }else{
        target = former ;
    }

    rep(i,np){
        if(a[i]==target){
            cout << i+1 << endl ;
            return 0 ;
        }
    }
 return 0 ;
}  
