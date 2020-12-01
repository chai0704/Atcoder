#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int a,b,c;cin >> a >> b >> c;
 int k;cin >> k;
 int tmp = max(max(a,b),c);

 int ans = a+ b + c;
 ans -= tmp;
 rep(i,k){
   tmp *= 2;
 }
 ans += tmp;
 cout << ans << endl;
 
}
