#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
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
    int  a[n] ;
    rep(i,n){
        cin >> a[i] ;
    }
    int ans = lim ;

    if(n==1){
        cout << a[0] << endl ; 
        return 0 ;
    }

    for (int bit = 0; bit < (1 << (n-1)); bit++) {
        int tot = 0 ;
        int cur = a[0] ;
        for (int i = 1; i < n ; i++) {
            if (bit & (1 << i-1)){
                tot ^= cur ;
                cur = a[i] ;
            }else{
                cur |= a[i] ;
            }
        }
        tot ^= cur ;
        ans = min(ans,tot) ;
    }

    cout << ans << endl ;
 return 0 ;
}  
    