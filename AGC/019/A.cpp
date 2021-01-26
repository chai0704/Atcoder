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
ll q,h,s,d; cin >> q >> h >> s >> d;
ll n; cin >> n;



ll flg;
ll ans = 0;
flg = min(q*4, min(h*2, s));//cheapest of 1 little
//cout << flg << endl;

if(flg * 2 >= d){// d is cheapest in 2 little
  
  if(n % 2 == 0){
    ans += (n / 2) * d;
    cout << ans << endl;
    return 0;
  }else{
    ans += (n / 2) * d;
    ans += flg;
    cout << ans << endl;
    return 0;
  }
}else{
  cout << n * flg << endl;
  return 0;
}


}
