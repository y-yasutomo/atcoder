#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;
const ll llINF = 2e18;

int main() {
    ll n ;
    cin >> n ;
    vector<ll> a(100) ;
    vector<ll> b(100) ;

    a[0] = 3 ;
    b[0] = 5 ;

    int i = 0 ;
    int j = 0 ;
    while(a[i]*3<2e18){
        a[i+1] = a[i]*3 ;
        i++ ;
    }
    while(b[j]*5<2e18){
        b[j+1] = b[j]*5 ;
        j++ ;
    }
    
    for(int x=0;x<=i;x++){
        for(int y=0;y<=j;y++){
            if(a[x]+b[y]==n){
                cout << x+1 << " " << y+1 << endl ;
                return 0 ;
            }
        }
    }
cout << -1 << endl ;
return 0 ;
}  
