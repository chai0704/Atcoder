#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int a,b,c,d;
 cin >> a >> b >> c >> d;
 if(abs(a-c) <= d)cout << "Yes" << endl;
 else if(abs(a-b) <= d && abs(c-b) <= d )cout << "Yes" << endl;
 else cout <<"No" << endl;
}
