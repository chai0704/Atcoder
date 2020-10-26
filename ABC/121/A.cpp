#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
ll cnt =0,ans=0;
//cout << setprecision(11);

int main(){
  ll H,W;  cin >> H >> W;
  ll h,w;  cin >> h >> w;

  ans=H*W;
  ans-=h*W;
  H-=h;
  ans-=w*H;
  if(ans<0)cout << 0 << endl;
  else cout << ans << endl;

}
