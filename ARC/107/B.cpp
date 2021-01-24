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

    int n,k;
    cin >> n >> k;

    //(a+b)-(c+d) = k
ll ans =0;
    for(int i=2;i<=2*n;i++){
        ll cd = i-k;
        ll ab = i;
        ll l,m;
        if(cd <= 1)continue;
        if(2*n < cd)continue;
        if(ab <= n+1){
            l =ab-1;
        }else{
            l = 2*n-ab +1;
        }
        if(cd <= n+1){
            m =cd-1;
        }else{
            m = 2*n-cd +1;
        }

        ans += m*l;

    }
    cout << ans << endl;
}
