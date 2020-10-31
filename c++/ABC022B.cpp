#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
 int n ;
 cin >> n ;
 set<int> s ;
 int ans = 0 ;
 rep(i,n){
     int a ;
     cin >> a ; 
     if(s.find(a)!=s.end()) ++ans ;
     s.insert(a) ;
 } 
 cout << ans << endl ;
 return 0 ;
}  
