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
    string s ;
    cin >> s ;
    for(int i=1;i<s.size();i++){
        cout << s[i] ;
    }
    cout << s[0] << endl ;
 return 0 ;
}  
    