#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;

    if((n-1)/20%2==0){
        cout << (n-1)%20+1 << endl ;
    }else{
        cout << 20-(n-1)%20 << endl ;
    }

 return 0 ;
}  
