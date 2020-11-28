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
  int n;  cin >> n;
  ll a[n+1]; 
 
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  ll s = 0,b = 0, max_b = 0;
  rep(i,n){
    b += a[i];
    max_b = max (max_b,b);
    ans = max(ans,max_b+s);

    s += b;
  }

  cout << ans << endl;


}
