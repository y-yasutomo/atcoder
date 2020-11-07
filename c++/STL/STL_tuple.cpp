#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() { 
    tuple<int,int,int> a ;
    cin >> get<0>(a) >> get<1>(a) >> get<2>(a) ;
   vector<tuple<double, int, int>> B; 
   int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        double p1; int p2, p3;
        cin >> p1 >> p2 >> p3;
        B.push_back(make_tuple(p1, p2, p3));
    }
    sort(B.begin(), B.end());
    for (int i = 0; i < N; i++) printf("%.5lf %d %d\n", get<0>(B[i]), get<1>(B[i]), get<2>(B[i]));
    return 0;
}  
