#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n,k ;
    cin >> n >> k ;
    int s[n] ;
    rep(i,n) cin >> s[i] ;

    int ans = 0 ;
    int left = 0 ;
    int right = 0 ;
    ll sum = 1 ;
    for(;left<n;left++){
        while(right<n && sum*s[right]<=k){
            if(s[right]==0){
                cout << n << endl ;
                return 0 ;
            }
            sum*=s[right] ;
            right++ ;
        }
        ans = max(ans,right-left) ;
        if(left==right)right++ ;
        else sum/= s[left] ;
    }

    cout << ans << endl ;
 return 0 ;
}
