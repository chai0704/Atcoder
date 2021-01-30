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
 int a,b,c,x; cin  >> a >> b >> c >> x;
 int ans = 0;
 for(int i = 0;i<=a;i++){
     for(int j=0;j<=b;j++){
         for(int k=0;k<=c;k++){
             if(i*500 + j*100 + k*50 == x)ans++;
         }
     }
 }
 cout << ans << endl;
 
}
