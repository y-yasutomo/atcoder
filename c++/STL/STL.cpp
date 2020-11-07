#include <iostream>
#include <cmath>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    /*
    double a,b ;
    cin >> a >> b ;
    printf("%.12f\n",abs(a-b)) ;
    */
    // 例 2: 三角関数の利用例。x を角度で入力し、sin(x),cos(x),tan(x) の値を出力します。
    double pi = 3.141592653589793238;
    double x;
    cin >> x;
    printf("%.12lf\n", sin(x / 180.0 * pi));
    printf("%.12lf\n", cos(x / 180.0 * pi));
    printf("%.12lf\n", tan(x / 180.0 * pi));

    return 0 ;
}  
