#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    int  x,y ;
    cin >> x >> y ;
    if(x>y){
        if(y+3>x){
            cout << "Yes" << endl ;
        }else{
            cout << "No" << endl ;
        }
    }else{
        if(x+3>y){
            cout << "Yes" << endl ;
        }else{
            cout << "No" << endl ;
        }
    }
 return 0 ;
}  
