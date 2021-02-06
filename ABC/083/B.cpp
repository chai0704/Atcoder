#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;

int digsum(ll n){
int res = 0;
while(n > 0){
  res += n%10;
n /= 10;
}
return res;
}

int main(){
   int n;   cin >> n;
   int a,b; cin >> a >> b;

   for(int i=1;i<=n;i++){
       int tmp;
       tmp = digsum(i);
      // cout << tmp << endl;
       if(tmp<= b && a<= tmp)ans+=i;

   }
   cout << ans << endl;
}
