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
  a = b = c = 0;
  string s; cin >> s;

  rep(i,3){
    if(s.at(i) == 'a')a++;
    if(s.at(i) == 'b')b++;
    if(s.at(i) == 'c')c++;
  }

  if(a && b && c){
    cout << "Yes" << endl;
    return 0;
  }else{
    cout << "No" <<endl;
  }

}
