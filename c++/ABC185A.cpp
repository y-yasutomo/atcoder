#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    int ans = 101 ;
    rep(i,4){
        int a ;
        cin >> a ;
        ans = min(ans,a) ;
    }
    cout << ans << endl ;
 return 0 ;
}  
