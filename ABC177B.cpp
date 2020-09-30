#include <iostream>
#include <algorithm>
#include <queue>

#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;

int main() {

    string s,t ;
    cin >> s >> t ;

    int ans = t.size() ;
    for(int i=0;i<=(s.size()-t.size());++i){
        int diff = 0 ;
        for(int j=0;j<t.size();++j){
            if(t[j]!=s[i+j]){
                diff++ ;
            }
        }
        ans = min(ans,diff) ;
    }

    cout << ans << endl ;
    
    return 0 ;
}