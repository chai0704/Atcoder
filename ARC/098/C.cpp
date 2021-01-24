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

    int n; cin >> n;
    string s;
    cin >> s;
    vector<int>w(n);
    vector<int>e(n);
    if(s.at(0) == 'W'){
        w.at(0) = 1;
        e.at(0) = 0;
    }else{
        w.at(0) = 0;
        e.at(0) = 1;
    }

    


    for(int i=1;i<n;i++){
        if(s.at(i) == 'W'){
            w.at(i) = w.at(i-1) + 1;
            e.at(i) = e.at(i-1);
        }

        if(s.at(i) == 'E'){
            w.at(i) = w.at(i-1) ;
            e.at(i) = e.at(i-1) + 1;
        }
    }
    ll ans = 1000000007;
    
    for(int i=0;i<n;i++){
        ll b ;
         b = w.at(i);
         b += e.at(n-1) - e.at(i);
         if(s.at(i) == 'W')b--;
        // cout << b << " " ;// ans << " ";
         
         
         ans = min(ans,b); 
         
         
    }
    //cout << endl;
    cout << ans << endl;
}
