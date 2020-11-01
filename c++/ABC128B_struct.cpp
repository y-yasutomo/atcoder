#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

struct Restaurant{
    string name ;
    int point ;
    int ord ;

    bool operator< (const Restaurant &rhs){
        return name == rhs.name ? point > rhs.point : name < rhs.name ;
    }
} ;

int main() {
    int n ;
    cin >> n ;
    vector<Restaurant> rs(n) ;
    rep(i,n){
        string s ;
        int p ;
        cin >> s >> p ;
        rs[i].name = s ;
        rs[i].point = p ;
        rs[i].ord = i+1 ;
    }
    sort(rs.begin(),rs.end()) ;
    rep(i,n){
        cout << rs[i].ord << endl ;
    }
 return 0 ;
}  
