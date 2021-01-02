#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int ctoi(char c){
    return int(c)-int('0') ;
}

int main() {
    string a,b ;
    cin >> a >> b ;
    int asum = 0 ;
    int bsum = 0 ;
    for(int i=0;i<a.size();i++){
        asum+= ctoi(a[i]) ;
    }
    for(int i=0;i<b.size();i++){
        bsum+= ctoi(b[i]) ;
    }

    if(asum>=bsum){
        cout << asum << endl ;
    }else{
        cout << bsum << endl ;        
    }

 return 0 ;
}
