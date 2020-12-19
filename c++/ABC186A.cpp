#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const ll lim = 1e18 ;

int main() {
    int n,w ;
    cin >> n >> w ;
    cout << n/w << endl ;
 return 0 ;
}  
