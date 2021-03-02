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

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int main() {
    int x ;
    cin >> x ;
    int ans = 0 ;
    if(x%100==0){
        ans++ ;
        x++ ;
    }
    while(x%100!=0){
        x++ ;
        ans++ ;
    }
    cout << ans << endl ;
 return 0 ;
}  
