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

int main() {
    int x ;
    cin >> x ;
    cout << (x>=0 ? x : 0)  << endl ;
 return 0 ;
}  
