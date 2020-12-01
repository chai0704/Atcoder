#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int x;cin >> x;
 int tmp = 1;
 int ans = 0;
 while(tmp <= 35){

   for(int i=2;i<11;i++){
     if(pow(tmp,i) <= x){
       int a =pow(tmp,i);
       ans = max(ans,a);
     }
   }
   tmp ++;
 }
 cout << ans << endl;
}
