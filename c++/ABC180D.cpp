#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
 ll x,y,a,b ;
 cin >> x >> y >> a >> b ;
 ll ans = 0 ;
 while(1){
     if(x*a >= y)break;
     if(y/a < x)break;
     if(x*a >= x+b)break;
     x*=a ;
     ans++ ;
 }
 ans+= (y-1-x)/b ;
 cout << ans << endl ;
 return 0 ;
} 