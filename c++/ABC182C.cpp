#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    ll n ;
    cin >> n ;
    int cnt[3] = {0,0,0};

    while(n){
        cnt[n % 10 % 3]++ ;
        n = n/10 ; 
    }

    int temp = (cnt[1] + cnt[2]*2)%3 ;
    //cout << temp << endl ;
    int keta = cnt[0] + cnt[1] + cnt[2] ;
    //cout << keta << endl ;
    int res = -1 ;

    if(temp==0){
        cout << 0 << endl ;
        return 0 ;
    }else if(temp==1){
        if(cnt[1]){
            if(keta==1)res = -1 ;
            else res = 1 ;
        }else{
            if(keta==2)res = -1 ;
            else res = 2 ;
        }
    }else{
        if(cnt[2]){
            if(keta==1) res = -1 ;
            else res = 1 ;
        }else{
            if(keta==2)res = -1 ;
            else res = 2 ;
    }
    }
    cout << res << endl ;
 return 0 ;
}  
