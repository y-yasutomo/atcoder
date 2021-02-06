#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

ll min(ll a,ll b){
    return (a<b) ? a : b ;
}
ll max(ll a,ll b){
    return (a>b) ? a : b ;
}

const int lim = 1e9 ;

ll n ;
int ans = 0 ;
vector<char> lis = {'3','5','7'} ;
string S ;

void dfs(string &s){
    if(s.size()>0){
    if(stoll(s)>n){
        return ;
    }else{
        bool ind = true ;
        for(auto x : lis){
            if(s.find(x)==string::npos) ind = false ;
        }
        if(ind) ans++ ;
    }
    }
    for(auto x : lis){
        s.push_back(x) ;
        dfs(s) ;
        s.pop_back() ;
    }
}


int main() {
    cin >> n ;
    dfs(S) ;
    cout << ans << endl ;
 return 0 ;
}  