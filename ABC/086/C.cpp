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
 int n;cin >> n ;
 int t[n],x[n],y[n];
 cin >> t[0] >> x[0] >> y[0];
if(n == 1 && abs(x[0]) + abs(y[0]) > 1){
    cout << "No" << endl;
    return 0;
}
 for(int i=1;i<n;i++){
     cin >> t[i] >> x[i] >> y[i];
     int dist;
    // cout << "xi" << x[i] << "xi-1" << x[i-1] << endl;
     dist = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
    // cout << "DIST" << dist << endl;
     if(t[i] - t[i-1] < dist){
         cout << "No" << endl;
         return 0;
     }

     if(dist % 2 != (t[i] - t[i-1]) % 2){
         cout << "No" << endl;
         return 0;
     }
 }
 cout << "Yes" << endl;
}
