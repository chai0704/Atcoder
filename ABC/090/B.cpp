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
 int a,b;   cin >> a >> b;
int ans = 0;

 for(int i = a ;i <= b;i++){
     if(i / 10000 == i % 10 && (i/1000)%10 == (i/10)%10 ){
     //    cout << i << endl;
         ans++;
     }
 } 
 cout << ans << endl;
}
