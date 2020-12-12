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
    ll a[n] ;
    rep(i,n)cin >> a[i] ;

    ll Sum = 0 ;
    for (int i = 1; i < n; i++)
    {
        Sum+= a[i]-a[i-1] ;
    }

    printf("%.10f\n",(double)Sum/(n-1)) ;


 return 0 ;
}  
