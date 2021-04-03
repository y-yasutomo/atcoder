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
    double a,b ;
    cin >> a >> b ;
    double ans ;
    ans = (1.0-b/a)*100.0 ;
    printf("%.10f\n",ans) ;
    //cout << ans << endl ;
 return 0 ;
}  
    