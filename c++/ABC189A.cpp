#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const ll lim = 1e18 ;

int main() {
    int n ;
    ll x ;
    cin >> n >> x ;
    x *= 100 ;
    ll now = 0 ;

    for(int i=0;i<n;i++){
        int v,p ;
        cin >> v >> p ;
        now += v*p ;
        if(now>x){
            cout << i+1 << endl ;
            return 0 ;
        }
    }

    cout << -1 << endl ;

 return 0 ;
}  