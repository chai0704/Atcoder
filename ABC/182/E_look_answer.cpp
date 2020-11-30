#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;

const int  mx = 1505;
const int di[] = {0,0,-1,1};
const int dj[] = {1,-1,0,0};
int h, w, n, m;
bool light[mx][mx];
bool wall[mx][mx];
bool check[mx][mx];
bool memo[mx][mx];
bool visited[mx][mx];

bool f(int v , int i , int j){
  if(i < 0 || j < 0 || i >= h || j >= w)return false;
  if(wall[i][j])return false;
  if(light[i][j])return true;
  if(visited[i][j])return memo[i][j];

  visited[i][j] = true;

  return memo[i][j] = f(v,i+di[v],j+dj[v]);
}

int main() {
 
 cin>> h >> w >> n >> m;
 
 
 rep(i,n){
   int a , b;
   cin >> a >> b;
   a--;
   b--;
   light[a][b] = true;
 }
  rep(i,m){
   int a , b;
   cin >> a >> b;
   a--;
   b--;

   wall[a][b] = true;
 }

 for(int v=0;v<4;v++){
   rep(i,h)rep(j,w) visited[i][j] = false;
   rep(i,h)rep(j,w) if(f(v,i,j))check[i][j] = true;

 }
 int ans = 0;
 rep(i,h)rep(j,w) if(check[i][j])ans++;

 cout << ans << endl;
 return 0;
}
