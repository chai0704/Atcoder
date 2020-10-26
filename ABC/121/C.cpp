#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
ll cnt =0,ans=0;
//cout << setprecision(11);

int main(){
 int n,m; cin >> n >> m;
 pair<ll,ll>a[n];
 for(int i=0;i<n;i++){
   cin >> a[i].first;
   cin >> a[i].second;
 }
 sort(a,a+n);

 for(int i=0;i<n;i++){
   m-=a[i].second;
   if(m<0){
     ans+=m*a[i].first;
     m=0;
   }
   ans+=a[i].first*a[i].second;
  // cout << "i= " << i << " " << ans << endl;
   if(m==0){
     cout << ans << endl;
     return 0;
   }
   
 }
}
