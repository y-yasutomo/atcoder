#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    ll s,p ;
    cin >> s >>  p ;
    ll Max = max(s,p) ;    
    for(ll i=1;i*i<=Max;i++){
        if(p%i!=0)continue ;
        ll tmp = p/i ;
        if((tmp+i)==s){
            cout << "Yes" << endl ;
            return 0 ;
        }
    }
    cout << "No" << endl ;
 return 0 ;
}  
