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
    ll n,y;
    cin >> n >> y;
    y /= 1000;

    ll a,b,c;

    for(int i=0;9*i<=y-n;i++){
        a = i;
        if( (y - n-9*a)%4 == 0 ){
            b = (y - n-9*a) / 4;
            c = n - a - b;
            if( b >= 0 && c >= 0){
            cout << a <<" " << b << " " << c << endl;
            return 0;
            }else{
                continue;
            }
        }

    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
