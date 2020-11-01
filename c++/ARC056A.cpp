#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    ll a,b,k,l ;
    cin >>  a >> b >> k >> l ;

    int temp = k/l ;
    if(k%l==0){
        cout << temp*b << endl ;
    }else{
        cout << (temp*b+a*(k-temp*l) < (temp+1)*b ? temp*b+a*(k-temp*l) : (temp+1)*b ) << endl ;
    }



 return 0 ;
}  
