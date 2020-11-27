#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;


int main(){
 int n; cin >> n;
 int a[n];
 for(int i=0;i<n;i++)cin >> a[i];

 int gcd[1010];
 rep(i,1003)gcd[i] = 0;
 for(int i=0;i<n;i++){
   for(int j=2;j<=1000;j++){
     if(a[i] % j == 0)gcd[j]++;

   }
 }
int maxj =0;
 for(int j=0;j<1001;j++){
   if(maxj < gcd[j]){
     maxj = gcd[j];
     ans = j;
   }
 }
 cout << ans << endl;
}
