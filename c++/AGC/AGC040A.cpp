#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    string s ;
    cin >> s ;
    vector<ll> a(s.size()+1) ;
    rep(i,s.size()){
        if(s[i]=='<'){
            a[i+1] = max(a[i+1],a[i]+1) ;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='>'){
            a[i] = max(a[i],a[i+1]+1) ;
        }
    }

    ll ans = 0 ;
    rep(i,a.size()){
        ans+=a[i] ;
    }
    cout << ans << endl ;
 return 0 ;
}  
