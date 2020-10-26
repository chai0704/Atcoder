#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
ll cnt =0,ans=0;
//cout << setprecision(11);

int main(){
 int n,m,c; cin >> n >> m >> c;
 int b[m];
 for(int i=0;i<m;i++){
   cin >> b[i];
 }
 int a[n][m];
 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     cin >> a[i][j];
   }
 }

 for(int i=0;i<n;i++){
   ans=c;
   for(int j=0;j<m;j++){
     ans+=a[i][j]*b[j];
   }
   if(ans>0)cnt++;
 }
  cout << cnt << endl;
}
