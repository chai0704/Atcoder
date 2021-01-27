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

int main(){
  ll n;cin >> n;
  
  ll cnt[101000] = {};
  for(int i=0;i<n;i++){
    ll x;
    cin >> x;
    cnt[x]++;
  }
  ll ans = 0;

  for(int i=1;i<100000;i++){
    ans = max(ans,cnt[i]+cnt[i-1]+cnt[i+1]);
  }

  cout << ans << endl;
}
