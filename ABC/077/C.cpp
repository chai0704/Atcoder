#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
ll cnt =0,ans=0;
//cout << setprecision(11) << fixed;

int main(){
    ll n;  cin >> n;
    ll a[n],b[n],c[n];

    for(int i=0;i<n;i++){
        cin >> a[i];  
    }
    for(int i=0;i<n;i++){
          cin >> b[i];
    }
    for(int i=0;i<n;i++){
          cin >> c[i];
    }

    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);

    for(int i=0;i<n;i++){
      auto r = lower_bound(a,a+n,b[i])-a;
      ll l = upper_bound(c,c+n,b[i])-c;
      l = n-l;
      
      ans+=r*l;

    }
    cout << ans << endl;
}
