#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)
//#define LLONG_MAX 9223372036854775807i64 

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int main() {
    int n ;
    cin >> n ;
    int a[n],p[n],x[n] ;
    rep(i,n){
        cin >> a[i] >> p[i] >> x[i] ;
    }
    rep(i,n){
        x[i]-= a[i] ;
    }
    int ans = lim ;
    bool ind = false ;
    rep(i,n){
        if(x[i]>0){
            ind = true ;
            ans = min(ans,p[i]) ;
        }
    }
    cout << (ind ? ans : -1) << endl ;
 return 0 ;
}  
    