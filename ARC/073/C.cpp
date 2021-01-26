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
ll N, T;  cin >> N >> T;

vector<int> t;
for(int i=0;i<N;i++){
  int tmp ;
  cin >> tmp ;
  t.push_back(tmp);
}
ll ans = 0;
for(int i=0;i<N-1;i++){
  if(t[i] + T < t[i+1]){
    ans += T;
  }else{
     ans += t[i+1] - t[i];
  }
}
ans += T;
cout << ans << endl;
}
