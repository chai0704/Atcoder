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
  ll x,y;cin >> x >> y;
  ll i = 1;
  while(1){
    x *= 2;
    if(x>y)break;
    else i++;
  }
  cout << i << endl;
}
