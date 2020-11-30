#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){

  int n;cin >> n;
  vector<ll> a(n);
  rep(i,n)cin >> a[i];
  ll ans = 0;
  rep(i,n){
    while(a[i] % 2 ==0){
      ans++;
      a[i]/=2;
    }
  }
  cout << ans << endl;
}
