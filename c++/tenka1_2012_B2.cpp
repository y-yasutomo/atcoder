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
 getline(cin,s);
 for(int i=0;i<s.size();++i){
     if(s[i]==' '){
         while(s[i]==' '){
             i++ ;
         }
         cout << ',' ;
     }
     cout << s[i]  ;
 }
cout << endl ;
return 0 ;
}  
