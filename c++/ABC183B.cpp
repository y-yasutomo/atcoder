#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    double sx,sy,gx,gy ;
    cin >> sx >> sy >> gx >> gy ;
    double ans ;
    ans = (sx*gy+gx*sy)/(sy+gy) ;
    printf("%.10f\n",ans) ;
 return 0 ;
}  
