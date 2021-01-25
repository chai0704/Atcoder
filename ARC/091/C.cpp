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
   ll n,m;  cin >> n >> m;
   if(n == 1 && m == 1){
       cout << 1 << endl;
       return 0;
   }
   if(n == 1 || m == 1){
       cout << m*n-2 << endl;
       return 0;
   }

   cout << (m-2)*(n-2) << endl;


}
