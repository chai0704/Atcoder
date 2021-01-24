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

   ll a,b,c;
   cin >> a >> b >> c;
   unsigned long long v = a*b*c; 
   if(a>=b && a>= c){
       a /= 2;
   }else if(b>a && b>= c){
       b /= 2;
   }else{
       c /= 2;
   }

   unsigned long long red,blue;
   red = a*b*c;
   blue = v - red;
   if(red >= blue)
   cout << (red - blue) << endl;
   else cout << blue - red << endl;
   return 0;

}
