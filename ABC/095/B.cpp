#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int n,x;
 int m[n];
 cin >> n >> x;
 int mini = 100000000;
 rep(i,n){
   cin >> m[i];
   x-=m[i];
   mini = min(mini,m[i]);
   }
   int ans = n;
   ans += x/mini;
   cout << ans << endl;

}
