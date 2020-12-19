#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 string s ;
 cin >> s ;
 int n ;
 cin >> n ; 
 rep(i,n){
     int l,r ;
     cin >>  l >> r ;
     reverse(s.begin()+l-1,s.begin()+r) ;
 }
 cout << s << endl ;
return 0 ;
}  
