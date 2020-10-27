#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
const double pi = acos(-1);
int cnt =0,ans=0;
//cout << setprecision(11) << fixed;
int main(){
   int n,k; cin >> n >> k;
   int h[n];
   for(int i=0;i<n;i++){
       cin >> h[i];
   }

   sort(h,h+n);
   ans=INF;
   for(int i=0;i<=n-k;i++){
       ans = min(h[i+k-1]-h[i],ans);
   }
   cout << ans << endl;
}
