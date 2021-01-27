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
  ll n ;  cin >> n;

  ll a,b,c,d; cin >> a >> b >> c >> d;
  string s; cin >> s;
  if(d > c){
    
  for(int i=b-1;i<d-1;i++){
    if(s.at(i) == '#' && s.at(i+1) == '#'){
      cout << "No" << endl;
      return 0;
    }

  }

  for(int i=a-1;i<c-1;i++){
    if(s.at(i) == '#' && s.at(i+1) == '#'){
      cout << "No" << endl;
      return 0;
    }

  }
  

  cout << "Yes" << endl;
  return 0;
  }else{
    
    for(int i=b-1;i<=d-1;i++){
    if(s.at(i) == '.' && s.at(i+1) == '.' && s.at(i-1) == '.'){
      cout << "Yes" << endl;
      return 0;
    }

  }
      cout << "No" << endl;
      return 0;
    
  }

}
