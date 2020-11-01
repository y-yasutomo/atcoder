#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    string s ;
    cin >>  s ;
    vector<int> cnt(10) ;
    bool ans = false ;

    if(s.size()==1){
        if(s =="8") ans = true ;
    }
    if(s.size()==2){
        if(stoi(s)%8==0) ans = true ;
        reverse(s.begin(),s.end()) ;
        if(stoi(s)%8==0) ans = true ;    
    }
    
    if(s.size()>2){

    for(char c : s) cnt[ctoi(c)]++ ;
    
    for(int i=104;i<1000;i+=8){
        auto temp_cnt = cnt ;
        string temp =  to_string(i) ;
        for(char c : temp){
            temp_cnt[ctoi(c)]-- ;
        }
        for(int j=0;j<temp_cnt.size();j++){
            if(temp_cnt[j]<0) break ;
            if(j ==temp_cnt.size()-1) ans = true ;
        }
    }
    }
    cout << (ans ? "Yes" : "No")  << endl ;
 return 0 ;
}  
