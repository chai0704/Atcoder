#include <bits/stdc++.h>

using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll =  long long;
using P = pair<int,int>;
//using mint = modint1000000007;
const int MAX = 510000;
const ll MOD = 1000000007;
const ll INF = 1LL << 60;

int main(){
int n;  cin >> n;
vector<int>s;
ll minflg = INF;
ll ans = 0;
for(int i=0;i<n;i++){
  ll tmp;
  cin >> tmp;
  if(tmp % 10 != 0){
    minflg = min(minflg, tmp);
  }
  ans += tmp;
  s.push_back(tmp);
}

if(ans % 10 != 0){
  cout << ans << endl;
  return 0;
}else if(minflg != INF){
  cout << ans - minflg << endl;
  return 0; 
}else{
  cout << 0 << endl;
  return 0;
}

}
