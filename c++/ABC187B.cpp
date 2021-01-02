#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n;
    cin >> n ;
    int x[n],y[n] ;
    rep(i,n){
        cin >> x[i] >> y[i] ;
    }
    if(n==1){
        cout << 0 << endl ;
        return 0 ;
    }
    int ans = 0 ;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((x[j]==x[i])){
                continue ;
            }
            double temp = double(y[j]-y[i])/double(x[j]-x[i]) ;
            if(temp<=1 && temp>=-1){
                ans++ ;
            }
        }
    }
    cout << ans << endl ;
 return 0 ;
}
