#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
using mint = modint1000000007;

mint dp[2005][2005];
mint dpx[2005][2005];
mint dpy[2005][2005];
mint dpxy[2005][2005];

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  dp[0][0] = 1;
  dpx[0][0] = 1;
  dpy[0][0] = 1;
  dpxy[0][0] = 1;
  rep(i,h)rep(j,w) {
    if (i == 0 && j == 0) continue;
    if (s[i][j] == '#') continue;
    if (j) dpx[i][j] += dpx[i][j-1];
    if (i) dpy[i][j] += dpy[i-1][j];
    if (i && j) dpxy[i][j] += dpxy[i-1][j-1];
    dp[i][j] += dpx[i][j];
    dp[i][j] += dpy[i][j];
    dp[i][j] += dpxy[i][j];
    dpx[i][j] += dp[i][j];
    dpy[i][j] += dp[i][j];
    dpxy[i][j] += dp[i][j];
  }
  cout << dp[h-1][w-1].val() << endl;
  return 0;
}
