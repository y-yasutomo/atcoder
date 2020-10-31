#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 int n ;
 cin >> n ;
 vector<int> a = {0,1,2,3,4,5,6} ;
 for(int i=0;i<n;++i){
     int tmp ;
     tmp = a[i%5+1] ;
     a[i%5+1] = a[i%5+2] ;
     a[i%5+2] = tmp ;
 }

 rep(i,7){
     if(i==0) continue ;
     cout << a[i]  ;
 }
 cout << endl ;
 return 0 ;
}  
