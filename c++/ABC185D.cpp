#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n,m ;
    cin >> n >> m ;
    if(m==0){
        cout << 1 << endl ;
        return 0 ;
    }
    if(n==m){
        cout << 0 << endl ;
        return 0 ;
    }
    vector<int> a(m) ;
    rep(i,m){
        cin >> a[i] ;
    }
    a.push_back(0) ;
    a.push_back(n+1) ;
    sort(a.begin(),a.end()) ;

    int st = 1e9 ;
    for(int i=0;i<a.size()-1;i++){
        if(a[i+1]-a[i]-1==0) continue ;
        st = min(a[i+1]-a[i]-1,st) ;
    }
    //cout << st << endl ; 

    int ans = 0 ;
    for(int i=0;i<a.size()-1;i++){
        ans += (a[i+1]-a[i]-1+st-1)/st ;
    }
    cout << ans << endl ; 
 return 0 ;
}  
