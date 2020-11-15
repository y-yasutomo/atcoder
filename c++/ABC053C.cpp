#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    ll n ;
    cin >> n ;
    ll ans = 0 ;
    int temp = n%11 ;
    int cur ;
    if(temp==0){
        cout << (n/11)*2 << endl ;
        return 0 ;
    }else{
        ans = (n/11)*2 ;
        if(temp%2==0){
            cur = 6 ;
            while(temp>0){
                ans++ ;
                temp-= cur ;
                cur = (cur==6) ? 5 : 6 ;
            }
        }else{
            cur = 5 ;
            while(temp>0){
                ans++ ;
                temp-= cur ;
                cur = (cur==6) ? 5 : 6 ;
            }
        }
    }
    cout << ans << endl ;
 return 0 ;
}
