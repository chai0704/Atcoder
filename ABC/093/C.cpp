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
  int a,b,c;
  cin >> a >> b >> c;
  int tmp = max(a,max(b,c));// last max
  if((a+b+c) % 2 != tmp % 2 ){
    tmp ++;
  }
//cout << tmp << endl;
  ll ans = 0;
  if( (tmp - a) % 2 == 1 && (tmp - b) % 2 == 1 ){
    a++;
    b++;
    ans ++;
  }
  if( (tmp - a) % 2 == 1 && (tmp - c) % 2 == 1 ){
    a++;
    c++;
    ans ++;
  }
  if( (tmp - c) % 2 == 1 && (tmp - b) % 2 == 1 ){
    c++;
    b++;
    ans ++;
  }

  ans +=(tmp-a+1)/2;
  ans +=(tmp-b+1)/2;
  ans +=(tmp-c+1)/2;

  cout << ans << endl;
}
