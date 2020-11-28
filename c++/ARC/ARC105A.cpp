#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    ll a,b,c,d ;
    cin >> a >> b >> c >> d; 
    vector<ll> cookie = {a,b,c,d} ;
    ll Sum = a + b + c + d ;
    ll Diff = Sum ;
    for (int bit = 0; bit < (1<<4); ++bit) {
        ll Sum = 0 ;
        ll Diff = a+b+c+d ;
        for(int i=0;i<4;i++){
            if (bit & (1 << i)) {
                Sum += cookie[i] ;
                Diff-= cookie[i] ;
            }
        }
        if(Sum==Diff){
            cout << "Yes" << endl ;
            return 0 ;
        }
    }

    cout << "No" << endl ;
 return 0 ;
}  
