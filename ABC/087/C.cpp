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
 int n;     cin >> n;
 int a[n+1],b[n+1],sum1[n+1],sum2[n+1];
 a[0] = 0;
 b[0] = 0;
 sum1[0] = 0;
 sum2[0] = 0;
 for(int i=1;i<=n;i++){
     cin >> a[i];
     sum1[i] = sum1[i-1] + a[i];
 }
 for(int i=1;i<=n;i++){
     cin >> b[i];
     sum2[i] = sum2[i-1] + b[i]; 
 }
    int ans = 0;
 for(int i=1;i<=n;i++){

     int tmp = sum2[n] - sum2[i-1] + sum1[i];
     ans = max(ans,tmp);
 }
 cout << ans << endl;
}
