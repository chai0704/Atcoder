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
 int n;cin >> n;
 vector<int>a;
 ll cnt4 = 0, cntod = 0;
 rep(i,n){
   int tmp;
   cin >> tmp;
   a.push_back(tmp);
   if(tmp %4 == 0)cnt4++;
   if(tmp %2 != 0)cntod++;
 }

 ll cnt2 = n - cntod - cnt4;

 if(cnt2 % 2 == 1)cntod++;

 if(cntod -1 > cnt4){
   cout << "No" <<endl;
   return 0;
 }else{
   cout << "Yes" << endl;
   return 0;
 }

}
