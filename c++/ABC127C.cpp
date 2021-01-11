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
    int n,m ; 
    cin >> n >> m ;
    map<int,int> mp ;
    rep(i,m){
        int l,r ;
        cin >> l >> r ;
        mp[l]+= 1 ;
        mp[r+1]-= 1 ;
    }

    int pre = 0 ;
    int pass = 0 ;
    int cards = 0 ;
    int ans = 0 ;
    for(auto x : mp){
        cards = x.first-pre ;
        if(pass==m){
            ans += cards ;
        }
         pass += x.second ;
         pre = x.first ;
    }
    cout << ans << endl ;
 return 0 ;
}  
