#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    //priority_queue<int,vector<int>,greater<int>> q ;
    priority_queue<int> q ;
    q.push(100) ;
    q.push(20) ;
    q.push(50) ;
    q.push(10) ;
    q.push(10000) ;
    while(!q.empty()){
        cout << q.top() << endl ;
        q.pop() ;
    }
        cout << "###" << endl ;
    priority_queue<int,vector<int>,greater<int>> q2 ;
    q2.push(100) ;
    q2.push(20) ;
    q2.push(50) ;
    q2.push(10) ;
    q2.push(10000) ;
    while(!q2.empty()){
        cout << q2.top() << endl ;
        q2.pop() ;
    }

    return 0 ;
}  
