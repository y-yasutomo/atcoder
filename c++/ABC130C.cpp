#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int w, h, x, y ;
   cin >> w >> h >> x >> y ;
   printf("%.10f %d\n",(double)w*h/2,(w==x*2 && h==y*2)) ;
   //cout << ans << " " << (w==x*2 && h==y*2) << endl;
 return 0 ;
}  
