#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)
const int INF = 1001001001;

int main() {
 int n ;
 cin >> n ;
 vector<int> k(n-1) ;
 vector<int> ans(1) ;
 for(int i=0;i<n-1;i++){
     cin >> k[i] ;
 }
 ans[0] = k[0] ;
 for(int i=0;i<n-2;i++){
     ans.push_back(min(k[i],k[i+1])) ;
 }
 ans.push_back(k[n-2]) ;
 
 for(int i=0;i<n;i++){
     cout << ans[i] << " " ;
 }
 cout << endl ;
return 0 ;
}  
