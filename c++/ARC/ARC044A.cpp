#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

bool is_prime(ll N){
    if(N==1)return 0 ;
    for(ll i=2;i*i<=N;i++){
        if(N%i==0){
            return 0 ;
        }
    }
    return 1 ;
}

int main() {
    ll n ;
    cin >>  n ;
    if(n==1){
        cout << "Not Prime" << endl ;
        return 0 ;
    }
    if(is_prime(n)){
        cout << "Prime" << endl ;
        return 0 ;
    }
    if(n%10!=5 && n%10%2!=0){
        int cnt = 0 ;
     while(n>0){
            cnt+=n%10 ;
            n/=10 ;
        }
        //cout << cnt << endl ;
     if(cnt%3!=0){
            cout << "Prime" << endl ;
            return 0 ;
        }
    }
        cout << "Not Prime" << endl ;
 return 0 ;
}
