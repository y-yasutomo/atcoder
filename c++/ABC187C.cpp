#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n;
    cin >> n ;
    set<string> non ;
    set<string> exsits ;

    rep(i,n){
        string temp ;
        cin >> temp ;
        if(temp[0]=='!'){
            exsits.insert(temp) ;
        }else{
            non.insert(temp) ;
        }
    }

    string ans = "satisfiable" ;
    if(non.size()==0 || exsits.size()==0){
        cout << ans << endl ;
        return 0 ;
    }

    for(auto x : non){
            string temps = "!" + x ; 
            auto itr = exsits.find(temps) ; 
            if(itr != exsits.end()){
                ans = x ;
                break ;
            }
        }
    cout << ans << endl ;
 return 0 ;
}
