#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n,k ;
    cin >> n >> k ;
    double p[n] ;
    rep(i,n)cin >> p[i] ;
    rep(i,n)p[i] = (p[i]+1)/2 ;

    double temp = 0 ;
    int idx = 0 ;

    while(1){
        temp+=p[idx] ;
        idx++ ;
        if(idx==k)break ;
    }

    double ans = temp ;

    for(int i=idx;i<n;i++){
        temp+=p[i] ;
        temp-=p[i-k] ;
        //cout << temp << endl ;
        ans = max(ans,temp) ;
    }
    printf("%.7f\n",ans) ;
 return 0 ;
}  
