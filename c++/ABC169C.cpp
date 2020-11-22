#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

const ll lim = 1e18 ;

int main() {
    ll a ;
    double  b;
    cin >> a >> b;
    if(0){
    cout << (int64_t)floor(a * b) << endl;
    int64_t b2 = (int64_t)(b * 100.0);
    cout << a * b2 / 100 << endl;

     // 四捨五入する
    int64_t b3 = (int64_t)llround(b * 100.0);
    cout << a * b3 / 100 << endl;
//else
    // + 0.5 してから切り捨てる（b * 100.0 が整数に近いのでうまくいく）
    int64_t b4 = (int64_t)(b * 100.0 + 0.5);
    cout << a * b4 / 100 << endl;

    cout << 0.07*100 << endl;
    cout << 0.29 * 100 << endl;
    }

     // 四捨五入する
    ll b3 = llround(b * 100.0);
    cout << a * b3 / 100 << endl;

    // + 0.5 してから切り捨てる（b * 100.0 が整数に近いのでうまくいく）
    //ll b4 = b * 100.0 + 0.5;
    //cout << a * b4 / 100 << endl;

 return 0 ;
}  
