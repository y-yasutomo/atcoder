#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int q,h,s,d ;
    //0.25,0.5,1,2
    cin >> q >> h >> s >> d ;
    ll n ;
    cin >> n ;
    ll ans = 0 ;

    int temp = min(min(q*2,h)*2,s) ;
    if(temp*2<=d){
        ans = n*temp ;
    }else{
        if(n%2==0){
            ans += (n/2)*d ;
        }else{
            ans += (n/2)*d ;
            ans += temp ;
        }
    }
    cout << ans << endl ;
 return 0 ;
}  
