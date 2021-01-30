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
 int n;   cin >> n ;

 vector<int>a;
 rep(i,n){
     int b;
     cin >> b;
     a.push_back(b);
 }

 ll alice = 0, bob = 0;

 sort(a.begin(), a.end());

 while(!a.empty()){
     alice += a.back();
     a.pop_back();
     if(a.empty())break;

     bob += a.back();
     a.pop_back();
 }

 cout << alice - bob << endl;
 
}
