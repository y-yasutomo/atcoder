#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long ;
using namespace std;
const int INF = 1001001001;
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
    int h,w ;
    cin >> h >> w ;
    int si,sj ;
    cin >> si >> sj ;
    --si ; --sj ;
    int ti,tj ;
    cin >> ti >> tj ;
    --ti ; --tj ;
    vector<string> s(h) ;
    rep(i,h) cin >> s[i] ;
    vector<vector<int>> dist(h,vector<int>(w,INF)) ;
    deque<pair<int,int>> q ;
    dist[si][sj] = 0 ;
    q.emplace_back(si,sj) ;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        int d = dist[i][j];
        q.pop_front();
        rep(v,4){
            int ni = i + di[v] ; 
            int nj = j + dj[v] ;
            if(ni >= h || ni < 0 || nj<0 || nj >= w) continue ; 
            if(s[ni][nj]=='#') continue ; 
            if(dist[ni][nj]<=d) continue ; 
            dist[ni][nj] = d ;
            q.emplace_front(ni,nj) ;
        }
        for(int ei = -2;ei<=2 ;ei++){
            for(int ej = -2;ej<=2;ej++){
             int ni = i + ei; 
             int nj = j + ej;
             if(ni >= h || ni < 0 || nj<0 || nj >= w) continue ; 
             if(s[ni][nj]=='#') continue ; 
             if(dist[ni][nj]<=d+1) continue ; 
             dist[ni][nj] = d+1 ;
             q.emplace_back(ni,nj) ;            
            }
        }
    }

    int ans = dist[ti][tj] ;
    if(ans==INF) cout << -1 << endl ;
    else cout << ans << endl ;

    return 0 ;
}