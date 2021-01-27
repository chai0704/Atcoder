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
  ll n,m;  cin >>  n >> m;

  ll ans = 1;
  for(int i=1;i<=n;i++){
    ans *= i ;
    ans %= MOD;
  //  cout << ans << endl;
  }
  for(int i=1;i<=m;i++){
    ans *= i ;
    ans %= MOD;
  }
  
  ans %= MOD;

  if(n == m){
  cout << (ans * 2)%MOD << endl;
  return 0;
  }
  if(n-1 == m || m-1 == n){
  cout << ans << endl;
  return 0;
  }else{
    cout << 0 << endl;
    return 0;
  }

}
