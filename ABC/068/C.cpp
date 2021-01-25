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
    int n,m; 
    map<int,int>M[220000];
    cin >> n >> m;
    
    int a=0,b=0;
    rep(i,m){
        cin >> a >> b;
        M[a][b] = 1;
        M[b][a] = 1;
        }

        for(int i=2;i<n;i++){
            if(M[1][i] == 1 && 1 == M[i][n]){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
        
        cout << "IMPOSSIBLE" << endl;

    

}
