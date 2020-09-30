#include <iostream>
#include <algorithm>
#include <queue>

#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;

int main() {

    ll a,b,c,d ;
    cin >> a >> b >> c >> d ;

    cout << max(b*d,max(b*c,max(a*c,a*d)))  << endl ;
    return 0 ;
}