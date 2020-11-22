#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    string s ;
    cin >>  s ;
    int a,b,c,d ;
    cin >> a >> b >> c >> d ;
    a-- ;
    b-- ;
    c-- ;
    d-- ;
    if(a<0){
        cout << '"' ;
    }
    for(int i=0;i<s.size();i++){
        if(i==a || i==b || i==c || i==d){
            cout << s[i] << '"' ;
        }else{
            cout << s[i] ;
        }
    }
    cout << endl ;
 return 0 ;
}
