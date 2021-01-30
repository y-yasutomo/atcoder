#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;


int n,k ;
int ask[5][5] ;

bool ans = false ;

void dfs(int nn,int x){
    if(nn==n){
        if(x==0) ans = true ;
        return ;
    }
    for(int i=0;i<k;i++){
        dfs(nn+1,x^ask[nn][i]) ;
    }
}

int main() {
    cin >> n >> k ;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin >> ask[i][j] ;
        }
    }

    dfs(0,0) ;

    if(ans){
        cout << "Found" << endl ;
    }else{
        cout << "Nothing" << endl ;
    }
 return 0 ;
}  