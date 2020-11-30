#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
int d,n;  cin >> d >> n;
ll a = pow(100,d);
if(n == 100)cout << a*(n+1) << endl;
else cout << a*n << endl;
}
