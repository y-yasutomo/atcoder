#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int h,w ;
    cin >> h >> w ;
    vector<int> a(h*w) ;
    for(int i=0;i<h*w;i++){
        cin >> a[i] ;
    }
    sort(a.begin(),a.end()) ;
    int Min = a[0] ;
    int ans = 0 ;

    for(int i=0;i<a.size();i++){
        ans+=(a[i]-Min) ;
    }
    cout << ans << endl ;
 return 0 ;
}  
