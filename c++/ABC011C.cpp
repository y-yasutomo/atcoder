#include <iostream>
#include <algorithm>
#include <vector>

#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;

void Print(int pos, string s) {
        if (pos == 1) {
            cout << s + "a" << endl;
            cout << s + "b" << endl;
            cout << s + "c" << endl;
        } else {
            Print(pos - 1, s + "a");
            Print(pos - 1, s + "b");
            Print(pos - 1, s + "c");
        }
    }

int main() {

    int n ;
    cin >> n ;
    string s = "" ;
    Print(n,s) ;
    return 0 ;
}
