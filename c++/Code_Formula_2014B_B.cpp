#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    string  s;
    cin >> s ;
    ll ans , ans2 ;
    ans = ans2 = 0 ;
    //cout << s[0] << endl ;
    //cout << ctoi(s[0]) << endl ;
    reverse(s.begin(),s.end()) ;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            ans2+= ctoi(s[i]) ;
        }else{
            ans+= ctoi(s[i]) ;
        }
    }
    cout << ans << " " << ans2 << endl ;
 return 0 ;
}  
