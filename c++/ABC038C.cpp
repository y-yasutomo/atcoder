#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    vector<int> a(n) ;
    rep(i,n) cin >> a[i] ;

    ll ans = 0 ;
    int right = 1 ;
    for(int left=0;left<n;left++){
        while(right<n && (a[right]>a[right-1] || left>=right)){
            right++ ;
        }
        ans += right - left ;
        if(left==right) right++ ; 
    }

    cout << ans << endl ;
    

 return 0 ;
}  
