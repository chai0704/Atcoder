#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 10e7+7;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;
const int di[] = {0,0,-1,1};
const int dj[] = {1,-1,0,0};


int main(){
  int h, w;
  cin >> h >> w ;

  vector<string> s(h);
  rep(i,h) cin >> s[i];
  ll dist[h][w];
  rep(i,h)rep(j,w){
    dist[i][j]=INF;
   // cout << dist[i][j] << endl;
  }

  queue<P> q;
  
  rep(i,h)rep(j,w){
    
    if(s[i][j] == 'S')
    {
      q.emplace(i,j);
     // cout << i << " " << j << endl;
      dist[i][j] = 0;
    }
  }

   vector<vector<P>> warps(256);
  rep(i,h)rep(j,w) warps[s[i][j]].emplace_back(i,j);
  
  
  while(!q.empty()){
    int i = q.front().first;
    int j = q.front().second;
    q.pop();

     if(s[i][j] == 'G'){
      cout << dist[i][j] << endl;
      return 0;
    }

    rep(k,4){
      int ni = i+di[k] , nj = j+dj[k];
     // cout << ni<<" " <<nj << endl;
     // cout << dist[ni][nj] << endl;
      if(ni < 0 || ni >= h || nj<0 || nj>=w)continue;
      if(s[ni][nj] == '#')continue;
      if(dist[ni][nj] != INF)continue;
     // cout << dist[i][j] << endl;
      dist[ni][nj] = dist[i][j] + 1;
    //  cout << ni << " " << nj << endl;
      q.emplace(ni,nj);

    }

    if(islower(s[i][j])) {
      for(P p:warps[s[i][j]]){
        int ni = p.first , nj = p.second;
        if(dist[ni][nj] != INF)continue;
        dist[ni][nj] = dist[i][j] + 1;
        q.emplace(ni,nj);
      }
      warps[s[i][j]] = vector<P>();
    }
  }

  cout << -1 << endl;
  return 0;
}
