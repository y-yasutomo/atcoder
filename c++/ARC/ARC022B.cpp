#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >> n ;
    int a[n] ;
    rep(i,n) cin >> a[i] ;
    int ans = 0 ;
    int right = 1 ;
    set<int> temp ;
    temp.insert(a[0]) ;

    for(int left=0;left<n;left++){
        while( temp.find(a[right])==temp.end() && right<n){
            temp.insert(a[right]) ;
            right++ ;
        }
        int tempsize = temp.size() ;
        ans = max(ans,tempsize)  ;
        temp.erase(a[left]) ;
        if(left==right) right++ ;
    }

    cout << ans << endl ;
 return 0 ;
}
