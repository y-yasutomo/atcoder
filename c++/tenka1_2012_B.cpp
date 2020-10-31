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

 string ans ;
 ans = s[0] ;
 //cout << s[0] ;
 bool flag = false ;
 for(int i=1;i<s.size()-1;++i){
     if(s[i]==' ' && s[i+1]==' '){
         flag = true ;
         continue ;
     }else{
         if(flag){
             ans+=',' ;
             flag = false ;
             i+=1 ;
         } 
         ans+=s[i] ;
     }
 }

 ans+=s[s.size()-1] ;
 replace(ans.begin(),ans.end(),' ',',') ;
 
 cout << ans << endl ;


return 0 ;
}  
