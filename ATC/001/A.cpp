#include <bits/stdc++.h>

using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll =  long long;
using P = pair<int,int>;
//using mint = modint1000000007;
const int MAX = 510000;
const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;
char c[510][510];
int h,w; 
bool ok = false;

void dfs(int x, int y){
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    if(c[x][y] == 'g')ok = true;
    if (c[x][y] == '@' || c[x][y] == '#') return;
    c[x][y] = '@';
    rep(i,4){
        int nx,ny;
        nx = x + dx[i];
        ny = y + dy[i];
        if(ny<0 || ny>=w || nx<0 || nx>=h)continue;
         dfs(nx, ny);
    }
}


int main(){
   cin >> h >> w;    
    rep(i,h){
        rep(j,w){
            cin >> c[i][j];
        }
    }

     rep(i,h){
        rep(j,w){
        if(c[i][j] == 's')dfs(i,j);
        }
    }

if(ok)cout << "Yes" << endl;
    else cout << "No" << endl;

}
