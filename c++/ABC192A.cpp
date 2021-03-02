#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int main() {
    string s ;
    cin >> s ;

    for(int i=0;i<s.size();i++){
        if(i%2==0){
            if(s[i]!=tolower(s[i])){
                cout << "No" << endl ;
                return 0 ;
            }
        }else{
            if(s[i]!=toupper(s[i])){
                cout << "No" << endl ;
                return 0 ;
            }
        }
    }
    cout << "Yes" << endl ;
 return 0 ;
}  
