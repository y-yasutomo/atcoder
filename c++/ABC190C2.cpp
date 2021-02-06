#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define LINF (1LL<<60)
#define rep(i,n) for (int i=0; i < (n); ++i)

const int lim = 1e9 ;


int main() {
    int n,m ;
    int K ;
    cin >> n >> m ;
    int a[m],b[m] ;
    for(int i=0;i<m;i++){
        cin >> a[i] >> b[i] ;
    }
    cin >> K ;
    int c[K],d[K] ;
    for(int i=0;i<K;i++){
        cin >> c[i] >> d[i] ;
    }
    int ans = 0 ;
    for (int bit = 0; bit < (1<<K); ++bit) {
        vector<int> dish(n+1) ;
        for(int i=0;i<K;i++){
            if (bit & (1 << i)) {
                dish[c[i]]++ ;
            }else{
                dish[d[i]]++ ;
            }
        }
        int temp = 0 ;
        for(int i=0;i<m;i++){
            if(dish[a[i]]>0 && dish[b[i]]>0){
                temp++ ;
            }
        }
        ans = max(ans,temp) ;
    }
    cout << ans << endl ;
 return 0 ;
}  