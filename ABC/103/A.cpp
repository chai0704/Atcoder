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

  int a[3];
  rep(i,3)cin >> a[i];

  sort(a,a+3);
  rep(i,2)ans+=a[i+1]-a[i];
  cout << ans << endl;
}
