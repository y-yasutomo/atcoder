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
double PI = 2 * acos(0.0);

int main() {
    int n ;
    cin >> n ;
    double x0,y0,x2,y2 ;
    cin >> x0 >> y0 >> x2 >> y2 ;
    double midx,midy ;
    midx = (x0+x2)/2.0 ;
    midy = (y0+y2)/2.0 ;

    double x,y ;
    x = x0 - midx ; 
    y = y0 - midy ;

    double degree = ((360.0/n)/180.0) ;

    double xd = x*cos(degree*PI)-y*sin(degree*PI) ;
    double yd = x*sin(degree*PI)+y*cos(degree*PI) ;

    cout << printf("%.12f",(double)xd+midx) << endl ;
    cout << printf("%.12f",(double)yd+midy) << endl ;

 return 0 ;
}  
    