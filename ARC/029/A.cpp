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
    int n;  cin >> n;
    int t[n];
    rep(i,n)cin >> t[i];
ll ans =1e9;
    for(int i=0;i< 1<< n ;i++){
        ll h1=0,h2=0;
        for(int j=0;j<n;j++){
            if(i>>j & 1){
                h1+= t[j];
            }else{
                h2+= t[j];
            }
        }
        ll tmp = max(h1,h2);
        ans = min(tmp,ans);
    }
    cout << ans << endl;
}
