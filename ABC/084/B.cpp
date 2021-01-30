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
int a,b;cin >> a >> b;
string s;
cin >> s;

for(int i=0;i<a+b+1;i++){
    if(i == a && s.at(i) != '-'){
        cout << "No" << endl;
        return 0;
    }
    if(i != a && (s.at(i) < '0' || s.at(i) > '9' ) ){
        cout << "No" << endl;
        return 0;
    }
}
cout << "Yes" << endl;
}
