#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    int ans = 0 ;
    for(int i=0;i<s.size();i++){
        map<char,int> mp ;
        for(int j=i;j<s.size();j++){
            mp[s[j]]+=1 ;
        if(mp['A']==mp['T'] && mp['G']==mp['C']){
            ans++ ;
            }
        }
        //cout << mp['A'] << " " <<  mp['T'] << endl ;
        //cout << mp['G'] << " " <<  mp['C'] << endl ;
    }
    cout << ans << endl ;
 return 0 ;
}  
