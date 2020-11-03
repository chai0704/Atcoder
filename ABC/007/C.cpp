#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(ll i=0;i<n;i++)
#define inf 999999999
const int mod = 1000000007;
ll cnt = 0;
ll ans = 0;
// cout << fixed  << setprecision(10);
char field[100][100];
int check[100][100];
int r,c;  
int sy,sx,gy,gx;
typedef pair<int , int > P;

int bfs(){
    queue<P> q;
    int dx[] = {0,0,-1,1};
    int dy[] = {1,-1,0,0};
    
    

    q.push(P(sy,sx));
    check[sy][sx] = 0;

    while(q.size()){
        P p = q.front(); q.pop();
        if(p.first == gy && p.second == gx)break;

        for(int i=0;i<4;i++){
            
                int ny = p.first + dy[i];
                int nx = p.second + dx[i];

                if(0<=ny && ny<r && 0<=nx && nx<c && check[ny][nx]==inf && field[ny][nx] !='#' ){
                    q.push(P(ny,nx));
                    check[ny][nx] = check[p.first][p.second]+1;
                }
            
        }
    }

    return check[gy][gx];

}


int main(){
    cin >> r >> c;
    cin >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;

    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin >> field[i][j];
        check[i][j] = inf;
    }
}

//cout << sx << " " << sy << endl;

int ans = bfs();
cout << ans << endl;

    
}
