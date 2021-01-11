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
    map<int,int> mp ;
    rep(i,n){
        int a,b ;
        cin >> a >> b ;
        mp[a] += 1 ;
        mp[b+1] -= 1 ; 
    } 
    int ans = 0 ;
    int s = 0 ;
    for(auto x : mp){        
        s += x.second ;
        ans = max(ans,s) ;
    }
    cout << ans << endl ;
 return 0 ;
}  
