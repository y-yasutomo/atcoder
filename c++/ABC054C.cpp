#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n,m ;
    cin >> n >> m ;
    string a[n],b[m] ;
    rep(i,n) cin >> a[i] ;
    rep(i,m) cin >> b[i] ;
    bool flag = false ;
    for(int i=0;i+m-1<n;i++){
        for(int j=0;j+m-1<n;j++){
            if(a[i][j]==b[0][0]){
                for(int k=0;k<m;k++){
                    for(int l=0;l<m;l++){
                        if(a[i+k][j+l]==b[k][l]){
                            if(k==m-1 && l==m-1)flag = true ;
                        }else{
                            k = m ;
                            break ;
                        }
                    }
                }
            }
        }
    }
 
 cout << ((flag) ? "Yes" : "No") << endl ;
 return 0 ;
}
