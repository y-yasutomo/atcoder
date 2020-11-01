#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    string s ;
    cin >> s ;
    int ans = 0 ;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]) ans+=1 ;
    }
    cout << ans << endl ;
 return 0 ;
}  
