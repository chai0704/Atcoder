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
vector<int> d;
for(int i=0;i<n;i++){
    int a;
    cin >> a;
    d.push_back(a);
}
ll ans =0;
sort(d.begin(),d.end());

for(int i=0;i<n-1;i++){
    if(d.at(i) != d.at(i+1))ans++;
}
cout << ans + 1 << endl;
}
