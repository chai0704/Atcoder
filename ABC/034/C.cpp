#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;
const int MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];
// テーブルを作る前処理、これも呼ぶ
void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
   for (int i = 2; i < MAX; i++){
     fac[i] = fac[i - 1] * i % MOD;
     inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
     finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
// 二項係数計算関数
long long comb(int n, int k){
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


int main(){
      int w,h;    cin >> w >> h;
      COMinit();
      cout << comb(w+h-2,w-1) << endl;

}
