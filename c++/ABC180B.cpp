#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
 int n ;
 cin >> n ;
 ll x[n] ;
 rep(i,n){
     cin >> x[i] ;
 }
 ll ans = 0 ;
 ll ans3 = 0 ;
 double ans2 = 0 ;

 rep(i,n){
     ans+= abs(x[i]) ;
     ans2+=abs(x[i])*abs(x[i]) ;
     ans3 = max(ans3,abs(x[i])) ;
 }

 ans2 = pow(ans2,0.5) ;

cout << ans << endl ;
printf("%.18f\n",ans2) ;
cout << ans3 << endl ;

 return 0 ;
} 