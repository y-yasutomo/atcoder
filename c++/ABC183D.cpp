#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >> n ;
    ll w ;
    cin >> w ;
    vector<int> s(n) ;
    vector<int> t(n) ;
    vector<int> p(n) ;

    int maxt = -1 ;
    rep(i,n){
        cin >> s[i] >> t[i] >> p[i] ;
        maxt = max(maxt,t[i]) ;
    }

    vector<ll> vec(maxt+1) ;
    for(int i=0;i<n;i++){
        vec[s[i]]+=p[i] ;
        vec[t[i]]-=p[i] ;
    }

    for(int i=0;i<vec.size()-1;i++){
        vec[i+1]+= vec[i] ;
    }

    for(int i=0;i<vec.size();i++){
        if(vec[i]>w){
            cout << "No" << endl ;
            return 0 ;
        }
        //cout << vec[i] << endl ;
    }
        cout << "Yes" << endl ;
 return 0 ;
}  
