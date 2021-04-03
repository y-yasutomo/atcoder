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

int main() {
    ll n ;
    cin >> n ;
    set<ll> st ;
    for(ll i=2;i*i<=n;i++){
        ll temp = i*i  ;
        while(temp<=n){
            st.insert(temp) ;
            temp*=i ; 
        }
    }
    cout << n-st.size() << endl ;
 return 0 ;
}  
    