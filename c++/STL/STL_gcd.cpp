#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
    cout << a / __gcd(a, b) * b << endl;
    return 0;
    return 0 ;
}  
