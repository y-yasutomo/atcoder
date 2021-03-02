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

int ctoi(char c){
    return int(c)-int('0') ;
}

const int lim = 1e9 ;

int main() {
    ll n ;
    int k ;
    cin >> n >> k ;
    vector<ll> a(k+1) ;
    a[0] = n ;

    if(n==0){
        cout << 0 << endl ;
        return 0 ;
    }

    for(int i=1;i<=k;i++){
        vector<int> hako(10) ;
        ll temp = a[i-1] ;
        while(1){
            hako[temp%10]++ ;
            temp/=10 ;
            if(temp==0)break ;
        }

        string g1 = "" ;
        string g2 = "" ;
        
        for(int j=1;j<hako.size() ;j++){
            if(hako[j]>0){
                //cout << hako[j] << endl ;
                for(int k=0;k<hako[j];k++){
                    g2 +=  to_string(j) ;
                }
            }
        }

        for(int j=9;j>=0;j--){
            if(hako[j]>0){
                //cout << hako[j] << endl ;
                for(int k=0;k<hako[j];k++){
                    g1 +=  to_string(j) ;
                }
            }
        }

        a[i] = stoi(g1) - stoi(g2) ;
        if(a[i]==0){
            cout << 0 << endl ;
            return 0 ;
        }
        //cout << g1 << endl ;
        //cout << g2 << endl ;
    }

    cout << a[k] << endl ;


 return 0 ;
}  
