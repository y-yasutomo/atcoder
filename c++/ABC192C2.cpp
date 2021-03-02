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
#define all(x) (x).begin(),(x).end()

const double PI  = acos(-1.0);
const int lim = 1e9 ;

int ctoi(char c){
    return int(c)-int('0') ;
}


int n,k ;

int g(int x){
    string temp = to_string(x) ;

    sort(all(temp)) ;
    int g2 = stoi(temp) ;

    sort(all(temp),greater<char>()) ;
    int g1 = stoi(temp) ;

    return g1 - g2  ;
}

int main() {
    cin >> n >> k ;

    int ans = n ;
    rep(i,k){
        ans = g(ans) ;
    }
    cout << ans << endl ;

 return 0 ;
}  
