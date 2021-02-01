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
    int n,m,x,y;
    cin >> n >> m;
    bool con[20][20] = {};
    for(int i=0;i<m;i++){
        cin >> x >> y;
        con[x-1][y-1] = con[y-1][x-1] =true;
    }
ll ans = 0;
    for(int s=0;s< 1<< n;s++){
        int t = bitset<20>(s).count();
        if(ans >= t)continue;

        bool ok = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(s>> i & s>> j & 1 && !con[i][j])
                ok = false;
            }
        }
        if(ok) ans = t;
    }
    cout << ans << endl;
}
