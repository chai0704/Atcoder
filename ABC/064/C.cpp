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
   int a;
   int hai=0,cha=0,midori=0,cyan=0,blue=0,yellow=0,orange=0,red=0,free=0;
   rep(i,n){
       cin >> a;
       if(1<=a && a<400)hai=1;
       if(400<=a && a<800)cha=1;
       if(800<=a && a<1200)midori=1;
       if(1200<=a && a<1600)cyan=1;
       if(1600<=a && a<2000)blue=1;
       if(2000<=a && a<2400)yellow=1;
       if(2400<=a && a<2800)orange=1;
       if(2800<=a && a<3200)red=1;
       if(3200<=a)free++;
   }
  int ans = hai+cha+midori+cyan+blue+yellow+orange+red;
  if(n == 1 ){
      cout << 1 << " " << 1 << endl;
  }
  else if(ans == 0 && free!=0){
      cout << 1 <<" " << free << endl;
  }
  else
   cout << ans << " " << (ans + free) << endl;




}
