#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int n ;
   cin >> n ;
   int ans = 0 ;
   for(int i=1;i<n;++i){
       ans+=(n-1)/i ;
   }
   printf("%d\n",ans) ; 
 return 0 ;
}  
