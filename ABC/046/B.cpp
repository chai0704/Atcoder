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
    ll n,k;
    cin >> n >> k;

    ll ans = 0;
    ans = k;
    for(int i=1;i<n;i++){
        ans *= k-1;
    }
    cout << ans << endl;
    
   

}
