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
    ll d,g;
    cin >> d >> g;
    ll p[20],c[20];
    for(int i=0;i<d;i++){
        cin >> p[i] >> c[i];
    }
    
    ll Min = 1e9;

    for(int i=0;i< (1<<d) ;i++){
        ll cnt = 0;
        ll sum = 0;

        rep(j,d){
            if(i>>j & 1){
                cnt += p[j];
                sum += 100*(j+1)*p[j] + c[j];
            }
        }

        for(int j = d-1;j>=0;j--){
            if(i>>j & 1)continue;

            int a = p[j];
            while (sum<g && a)
            {
                /* code */
                a--;
                sum+=100*(j+1);
                cnt ++;
            }
            
        }
        Min = min(Min,cnt);
    }
    cout << Min << endl;
}
