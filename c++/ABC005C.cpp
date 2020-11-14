#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int t,n,m ;
    cin >> t >> n ;
    queue<int> a ;
    rep(i,n){
        int aa ;
        cin >> aa ;
        a.push(aa) ;
    } 
    cin >> m ;
    int b[m] ;
    rep(i,m) cin >> b[i] ;

    for(int i=0;i<m;i++){
        while(1){
            if(a.empty()){
                cout << "no" << endl ;
                return 0 ;
            }
            int temp = a.front() ;
            a.pop() ;
            if(temp<=b[i] && (temp+t) >= b[i]){
                break ;
            }
        }
    }
    cout << "yes" << endl ;
 return 0 ;
}
