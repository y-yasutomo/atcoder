#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() { 
    int  n = 7 ;
    int a[] = {2,3,5,7,23,54,77} ;

    int x ; 
    cin >> x ;
    cout << lower_bound(a,a+7,x) - a << endl;
    cout << lower_bound(a,a+7,x)  << endl;
    cout << *lower_bound(a,a+7,x) << endl;

    return 0;
}  
