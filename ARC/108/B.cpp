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
string s;
cin >> s;
string t;

while(1){
  if(s.empty())break;
  t += s.at(0);
  s.erase(0,1);
 
  int m = t.size();
  
  if(m>=3){
    if( t.at(m-3) == 'f' && t.at(m-2) == 'o' && t.at(m-1) == 'x'){
      t.erase(m-3,3);
    }
  }
}

cout << t.size() << endl;
}
