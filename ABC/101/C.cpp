#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int n,k; cin >> n >> k;
 vector<int> a(n);
 rep(i,n){
    cin >> a[i];
 }

 ll ans =((n-1)+(k-1)-1)/(k-1);
 

 cout << ans << endl;

}
