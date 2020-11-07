#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <utility>
using namespace std;
using ll = long long ;
#define rep(i,n) for (int i=0; i < (n); ++i)

int main() {
    int h,w ;
    cin >> h >> w ;
    char maze[h][w] ;
    char gone[h][w] ;
    pair<int,int> s ;
    pair<int,int> g ;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char c ;
            cin >> c ;
            if(c=='#') gone[i][j] = -1 ;
            else gone[i][j] = 0 ;
            maze[i][j] = c ;            
            if(c=='s'){
                s.first = i ;
                s.second = j ;
            }
            if(c=='g'){
                g.first = i ;
                g.second = j ;
            }
        }
    }

    int dy[] = {0,1,0,-1};
    int dx[] = {1,0,-1,0};
    stack<pair<int,int>> st ;
    st.push(s) ;
    while(!st.empty()){    
        pair<int,int> next ;
        next = st.top() ;
        st.pop() ;
        for(int i = 0 ;i<4;i++){
                int temph = next.first + dy[i] ;
                int tempw = next.second + dx[i] ;
                if(temph >=0 && temph<h && tempw >=0 && tempw < w){
                    if(maze[temph][tempw]=='g'){
                        cout << "Yes" << endl ;
                        return 0 ;
                    }
                    if(gone[temph][tempw]==-1) continue ;
                    if(gone[temph][tempw]==1) continue ;
                    st.push(make_pair(temph,tempw)) ;
                    gone[temph][tempw] = 1 ;
                }
        }        
    }
    cout << "No" << endl ;
 return 0 ;
}  
