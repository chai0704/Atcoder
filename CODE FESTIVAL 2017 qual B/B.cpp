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
    int n;
    cin >> n;
    
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        mp[a]++;
    }

    int m;
    cin >> m;

    for(int i=0;i<m;i++){
        int a;
        cin >> a;
        if(mp[a]>0){
            mp[a]--;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;


}
