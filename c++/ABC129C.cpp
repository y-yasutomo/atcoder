#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const ll lim = 1e18 ;
const ll MOD = 1e9+7 ;

int main() {
    int n,m ;
    cin >> n >> m ;
    set<int> a ;
    vector<int> dp(n+1) ;
    dp[0] = 1 ;
    for(int i=0;i<m;i++){
        int aa ;
        cin >> aa ;
        a.insert(aa) ;
    }

    for(int i=1;i<=n;i++){
        if(a.find(i)==a.end()){
            if(i==1) dp[1] = 1 ;
            else dp[i] = (dp[i-1]%MOD + dp[i-2]%MOD)%MOD ;
        }
    }

    cout << dp[n] << endl ;

    return 0 ;
}  