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
    int n,m ;
    cin >> n >> m ;

    vector<pair<int,int>> ans(m) ;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp ;
            cin >> temp ;
            ans[j].first+=temp ;
            ans[j].second =  - (j + 1) ;
        }
    }
    sort(ans.begin(),ans.end(),greater<pair<int,int>>()) ;
    rep(i,m){
        if(i){
            cout << ' ' ;
        }
        cout << abs(ans[i].second) ;
    }
    cout << endl ;
 return 0 ;
}  