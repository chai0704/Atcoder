#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int n,m,x;
 cin >> n >> m >> x;

 int a[m];
 int left = 0;
 int right = 0;
 for(int i=0;i<m;i++){
   cin >> a[i];
   if(a[i] < x)left++;
   if(x < a[i])right++;
 }
 int ans = min(right,left);
 cout << ans << endl;
}
