#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int n ;
    cin >>  n  ;
    int a[n],b[n] ;
    vector<int>aa(2002) ;
    vector<int>bb(2002) ;
    rep(i,n){
        cin >> a[i] >> b[i] ;
        if(a[i]<0){
            aa[abs(a[i])+1000]++ ;
        }else{
            aa[a[i]]++ ;
        }

        if(b[i]<0){
            bb[abs(b[i])+1000]++ ;
        }else{
            bb[b[i]]++ ;
        }    
    }
    for(int i=0;i<aa.size();i++){
        if(aa[i]>=3 || bb[i]>=3){
            cout << "Yes" << endl ;
            return 0 ;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==0 && a[i]==0) continue ;
            double k = double((b[j]-b[i]))/double((a[j]-a[i])) ;
            for(int l=j+1;l<n;l++){
                if(b[l]== k*(a[l]-a[i])+b[i]){
                    //cout << a[i] << b[i]  << endl;
                    //cout << a[j] << b[j]  << endl;
                   //cout << a[l] << b[l] << " " << k << " " << k*(a[l]-a[i])+b[i] << endl;
                   cout << "Yes" << endl ;
                   return 0 ;
                } 
            }
        }
    }

    cout << "No" << endl ;

 return 0 ;
}  
