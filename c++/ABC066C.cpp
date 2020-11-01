#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >>  n  ;
    list<ll> b ;
    if(n%2==0){
        rep(i,n){
            ll a ;
            cin >> a ;
            if(i%2==0) b.push_back(a) ;
            else b.push_front(a) ;
        }
    }else{
        rep(i,n){
            ll a ;
            cin >> a ;
            if(i%2!=0) b.push_back(a) ;
            else b.push_front(a) ;
        }

    }

    for(auto itr : b ){
        cout << itr << " " ;
    }
    cout << endl ;
 return 0 ;
}  
