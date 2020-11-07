#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    cout << max({102,33,44442}) << endl ;
    int c[] = {1,5,7,2,0,3} ;
    cout << *min_element(c,c+6) << endl ;
    return 0 ;
}  
