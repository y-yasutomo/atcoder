#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)


int main() {
    int n ;
    ll k  ;
    cin >> n >> k ;
    vector<vector<int>> t(n) ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int tt ;
            cin >> tt ;
            t[i].push_back(tt) ;
        }
    }
    
    vector<int> nn(n-1) ;

    for(int i=2;i<=n;i++){
        nn[i-2] = i ;
    }
    int ans = 0 ;
    do{
        ll temp = 0 ;
        int prev ;
        for(int i=0; i<nn.size(); i++){
            if(i==0){
                temp+=t[0][nn[i]-1] ;
                prev = nn[i] ;
            }else{
                temp+=t[prev-1][nn[i]-1] ;
                prev = nn[i] ;
            }
            //cout<<nn[i];
            //if(i!=(n-1))cout<<" ";
        }
        temp+=t[prev-1][0] ;
        if(temp==k)ans++ ;
        //cout<<endl;
    }while(next_permutation(nn.begin(),nn.end()));

    cout << ans << endl ;

 return 0 ;
}  
