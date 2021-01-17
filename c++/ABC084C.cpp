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
    int n ;
    cin >> n ;
    vector<int> c(n-1),s(n-1),f(n-1) ;
    rep(i,n-1){
        cin >> c[i] >> s[i] >> f[i] ;
    }

    vector<int> ans(n) ;

    for (int i = 0; i < n-1; i++)
    {
        int temp = c[i]+s[i]  ;
        for (int j = i+1; j < n-1; j++)
        {
            //cout << temp%f[j] << endl ;
            if(temp<s[j]){
                temp = s[j] ;
            }
            if(temp%f[j]==0){
                temp+= c[j] ;
            }else{
                /*
                while(temp%f[j]!=0){
                    temp++ ;
                }
                */
                temp = temp + f[j] - temp%f[j] ;
                temp+= c[j] ;
            }
        }
        ans[i] = temp ;
    }

    for (auto x : ans)
    {
        cout << x << endl ;
    }
 return 0 ;
}  
