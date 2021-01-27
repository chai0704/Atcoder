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
  int n,d,x;
  cin >> n >> d;
  cin >> x;
  ll ans = 0;
  for(int i=0;i<n;i++){
    int a;
    cin  >> a ;
    ans += (d+a-1)/a ;
  }

  cout << ans + x << endl;
}
