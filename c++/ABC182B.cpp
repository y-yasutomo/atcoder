#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

ll gcd(ll x,ll y){
    return y ? gcd(y,x%y) : x ;
}

int main() {
    int n ;
    cin >> n ;
    vector<int> ans(1001) ;
    rep(i,n){
        int a ;
        cin >> a ;
        for(int j=2;j<=a;j++){
            if(a%j==0){
                ans[j]++ ;
            }
        }
    }

    int out = 0 ;
    int idx = 0 ;
    for(int i=2;i<ans.size();i++){
        if(ans[i]>out){
            out = ans[i] ;
            idx = i ;
        }
    }

    cout << idx << endl ;

 return 0 ;
}  
