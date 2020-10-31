#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

string s,t ;

int main() {
    cin >> s >> t  ;
    for(int i=0;i<s.size();i++){
        if(s==t){
            cout << "Yes" << endl ;
            return 0 ;
        }
        s = s[s.size()-1] + s ;
        s.pop_back() ; 
    }
    cout << "No" << endl ;
 return 0 ;
}  
