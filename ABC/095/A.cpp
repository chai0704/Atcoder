#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int a=700;
 string s;
 cin >> s;
 rep(i,3)if(s.at(i) == 'o')a+=100;
 cout << a << endl;
}
