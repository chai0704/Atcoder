#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
const double pi = acos(-1);
ll cnt =0,ans=0;
//cout << setprecision(11) << fixed;
int main(){
   int n;   cin >> n;
   int ab=0;
   for(int i=0;i<n;i++){
       int a=0;
       cin >> a ;
       ans+=a;
       ab=max(ab,a);
   }
  // cout << ab << endl;
   cout << ans-ab/2 << endl;
}
