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
#define all(x) (x).begin(),(x).end()

const double PI  = acos(-1.0);
const int lim = 1e9 ;

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    int n ;
    string s ; 
    cin >> n >> s ;
    int x = 0 ;
    int ans = 0 ;

    for(int i=0;i<s.size();i++){
        if(s[i]=='I') x++ ;
        else x-- ;
        ans = max(ans,x) ;
    }

    cout << ans << endl ;

 return 0 ;
}  
