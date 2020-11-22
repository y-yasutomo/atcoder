#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    stack<char> s ;
    cin >> n  ;
    int ans = 0 ;
    for(int i=0;i<n;i++){
        char c ;
        cin >> c ;
        if(c=='x' && s.size()>=2){
            if(s.top()=='o'){
                char tmp = s.top();
                s.pop();
                if(s.top()=='f'){
                    s.pop();
                }else{
                    s.push(tmp) ;
                    s.push(c) ;
                    continue ;
                }
            }else{
                s.push(c) ;
            }
        }else{
            s.push(c) ;
        }
    }

/*
    vector<char> t ;
    while(!s.empty()){
        t.push_back(s.top()) ;
        s.pop() ;
    }
    reverse(t.begin(),t.end()) ;
    for(auto x : t){
        cout << x ;
    }
    cout << endl ;
*/
    cout << s.size() << endl ;
 return 0 ;
}  
