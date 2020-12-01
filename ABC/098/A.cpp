#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
  ll ans = -10000000000;
  ll a , b;
  cin >> a >> b;
  ans = max(ans , a+b);
  ans = max( ans , a*b);
  ans = max(ans,a-b);
  cout <<ans << endl;
}
