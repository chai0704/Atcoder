#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int n; cin >> n;
 int a = n;
 int sn = 0;
 while(a){
   
   sn+= a%10;
   a /= 10;
 }
 //cout << sn << endl;
 if(n % sn == 0)cout << "Yes" << endl;
 else cout <<"No" << endl;
}
