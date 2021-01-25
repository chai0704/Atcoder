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
  string s; cin >> s;
  string t;
 // cout << t.size() << endl;
  int n = s.size();

  for(int i=0;i<n;i++){
      int m = t.size();
      if(s.at(i) == 'B' && m != 0){
          t.erase(m-1);
      }
      else if( s.at(i) == 'B' && m == 0)continue;
      else{
          t+=s.at(i);
      }
  }
  cout << t << endl;
}
