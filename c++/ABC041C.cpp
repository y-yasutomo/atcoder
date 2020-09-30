#include <iostream>
#include <algorithm>
#include <vector>

#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;

int main() {

    int n ;
    cin >> n ;
    vector<pair<int,int>> person(n) ;
    rep(i,n){
        int a ;
        cin >> a ;
        person[i].first = a ;
        person[i].second = i+1 ;
    } 
    
    sort(person.rbegin(),person.rend());
    rep(i,n){
        cout << person[i].second << endl ;
    }

    
    return 0 ;
}