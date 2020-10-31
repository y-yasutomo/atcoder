#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
   int n ;
   cin >> n ;
   ll cur = 1000 ;
   ll a[n] ;
   rep(i,n) cin >> a[i] ;
   ll have = 0 ;
   int z[n-1] ;
   rep(i,n-1){
       if(a[i+1]>a[i]){
           z[i] = 1 ;
       }else if(a[i+1]<a[i]){
           z[i] = -1 ;
       }else{
           z[i] = 0 ;
       }
   }

   rep(i,n-1){
       if(z[i]==1 && cur-a[i]>=0){
           have = have + cur/a[i] ;
           cur -= (a[i]*(cur/a[i])) ;
       }else if(z[i]==-1){
           cur += (a[i]*have) ;
           have = 0 ;
       }
   }
   if(have>0){
       cur += (a[n-1]*have) ;
   }

cout << cur << endl ;
 return 0 ;
}  
