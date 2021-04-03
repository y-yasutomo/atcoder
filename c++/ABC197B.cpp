#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)
//#define LLONG_MAX 9223372036854775807i64 

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int dx[4] = {0,0,1,-1} ;
int dy[4] = {1,-1,0,0} ;

int main() {
    int h,w,x,y  ;
    cin >> h >> w >> x >> y ;
    vector<string> s(h) ;
    rep(i,h){
        cin >> s[i] ;
    }
    int ans = 1 ;
    for(int i=0;i<4;i++){
        int xtemp = x-1 ;
        int ytemp = y-1 ;
        while(1){
            xtemp+=dx[i] ;
            ytemp+=dy[i] ;
            if(xtemp<0 || xtemp>=h || ytemp<0 || ytemp>=w)break ;
            else if(s[xtemp][ytemp]=='#')break ;
            else ans++ ;
        }
    }
    cout << ans << endl ;
 return 0 ;
}  
    