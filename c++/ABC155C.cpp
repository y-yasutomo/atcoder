#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
#include <map>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int main() {
    int n ;
    cin >> n ;
    map<string,int> mp ;
    rep(i,n){
        string s ;
        cin >> s ;
        mp[s]++ ;
    }

    int cnt = 0 ;
    for(auto x : mp){
      cnt = max(cnt,x.second) ;
    }
    vector<string> ans ;
    for(auto x : mp){
      if(x.second == cnt){
        ans.push_back(x.first) ;
      }
    }

    for(auto x : ans){
      cout << x << endl ;
    }
 return 0 ;
}  