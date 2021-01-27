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
  int a,b,k;
  cin >> a >> b >> k;
  if(b-a+1 <= 2*k){
    for(int i=a;i<=b;i++){
      cout << i << endl;
    }
    return 0;
  }


  for(int i=0;i<k;i++){
    cout << a+i << endl;
  }
  for(int i=k-1;i>=0;i--){
    cout << b-i << endl;
  }
}
