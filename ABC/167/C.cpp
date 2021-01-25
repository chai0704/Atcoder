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
    int n,m,x;  cin >> n >> m >> x;
    int c[n],a[n][m];
    for(int i=0;i<n;i++){
        cin >> c[i];
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int algo[m];
    ll ans = INF;

    for(int tmp = 1 ;tmp< (1 << n);tmp++){
        bitset<20> s(tmp);
        rep(i,m)algo[i] = 0;
        ll tmpans = 0;
        for(int i=0;i<n;i++){
            if(s.test(i)){
                tmpans += c[i];
                for(int j = 0;j<m;j++){
                    algo[j] += a[i][j];
                }
            }
        }
        int cnt=0;
        for(int j = 0;j<m;j++){
            if(algo[j]>=x){
                cnt++;
            }
        }
    if(cnt == m)    
    ans = min(ans , tmpans);

    }
    if(ans == INF)cout << -1 << endl;
    else cout << ans << endl;
}
