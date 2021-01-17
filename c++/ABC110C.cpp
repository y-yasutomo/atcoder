#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
#include <map>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    string s,t ;
    cin >> s >> t ;
    map<char,int> mpa ;
    map<char,int> mpb ;
    rep(i,s.size()){
        mpa[s[i]]++ ;
    }
    rep(i,s.size()){
        mpb[t[i]]++ ;
    }
    if(mpa.size()!=mpb.size()){
        cout << "No" << endl ;
        return 0 ;
    }

    vector<int> an ;
    vector<int> bn ;
    for(auto x : mpa){
        an.push_back(x.second) ;
    }
    for(auto x : mpb){
        bn.push_back(x.second) ;
    }
    sort(an.begin(),an.end()) ;
    sort(bn.begin(),bn.end()) ;
    for(int i=0;i<an.size();i++){
        if(an[i]!=bn[i]){
            cout << "No" << endl ;
            return 0 ;
        }
    }

    cout << "Yes" << endl ;  
 return 0 ;
}  
