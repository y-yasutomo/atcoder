#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    string s,t ;
    cin >> s >> t ;

    int idx = -1 ;
    
    for(int i=0;i<s.size();i++){
        if(s[i]==t[0] || s[i]=='?'){
            bool ind = true ;
            for(int j=0;j<t.size();j++){
                if(s[i+j]==t[j] || s[i+j]=='?'){
                    continue ;
                }else{
                    ind = false ;
                    break ;
                }
            }
                if(ind) idx = max(idx,i) ;
        }
    }

    if(idx==-1){
        cout << "UNRESTORABLE" << endl ;
        return 0 ;
    }else{
        for(int i=idx;i<(idx+t.size());i++){
            s[i] = t[i-idx] ;
        }
    }

    rep(i,s.size()){
        if(s[i]=='?'){
            s[i] = 'a' ;
        }
    }

    cout << s << endl ;
 return 0 ;
}  
