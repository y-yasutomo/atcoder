#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    int n ;
    cin >> n ;
    set<int> temp ;
    for(int i=1;i<=n;i++){
        string tmp = to_string(i) ;
        for(int j=0;j<tmp.size();j++){
            if(tmp[j]=='7'){
                temp.insert(i) ;
            }
        }
        //8
        vector<int> oct ;
        int ttmp = i ;
        while(1){
            oct.push_back(ttmp%8) ;
            if(ttmp/8==0)break ;
            ttmp/=8 ;            
        }
        reverse(oct.begin(),oct.end()) ;
        bool idx = false ;
        string oo ;
        for(auto x : oct){
            if(x==7)idx = true ;
            oo+= to_string(x) ;
        }
        if(idx){
            temp.insert(i)  ;
        }
    }
    cout << n-temp.size() << endl ;
 return 0 ;
}  
