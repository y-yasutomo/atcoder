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

string tumeru(int ii){
    string s = "" ;
    while(ii){
        //s += (ii%10-'0') ;
        s += to_string(ii%10) ;
        ii/=10 ;
    }
    //cout << s << endl ;
    while(s.size()!=6){
        s += "0" ;
    }
    reverse(s.begin(),s.end()) ;
    return s ;
}

int main() {
    int n,m ;
    cin >> n >> m ;
    vector<string> ans(m+1) ;
    vector<vector<pair<int,int>>> P(n+1) ;
    rep(i,m){
        int p,y ;
        cin >> p >> y ;
        pair<int,int> t = {y,i+1} ;
        P[p].push_back(t) ;
    }

    //sort(P[1].begin(),P[1].end()) ;
    for(int i=0;i<P.size();i++) sort(P[i].begin(),P[i].end()) ;

    for(int i=1;i<P.size();i++){
        int idx = 1 ;
        for(auto x : P[i]){
            ans[x.second] = tumeru(i) + tumeru(idx) ;
            idx++ ;
        }
    }
    
    //cout << P[1][0].first << P[1][0].second << endl ;
    for(int i=1;i<ans.size();i++){
        cout << ans[i] << endl ;
    }
    //cout << ans[1] << endl ;

 return 0 ;
}  
