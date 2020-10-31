#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
 int n ;
 cin >> n ;
 vector<string> s(n) ;
 rep(i,n){
     string tmp ;
     cin >> tmp ;
     reverse(tmp.begin(),tmp.end()) ;
     s[i] = tmp ;
 }
 sort(s.begin(),s.end());
 rep(i,n){
     string tmp = s[i] ;
     reverse(tmp.begin(),tmp.end()) ;
     cout <<  tmp << endl ;
 }
 return 0 ;
} 