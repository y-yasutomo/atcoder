#include <iostream>
#include <algorithm>
#include <queue>

#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;

int main() {

    int d,t,s ;
    cin >> d >> t >> s ;

    int ans = (d+s-1)/s ;
    if(ans>t)
     cout << "No" << endl ;
    else
     cout << "Yes" << endl ;     

    
    return 0 ;
}