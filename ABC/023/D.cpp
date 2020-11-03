#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;

int main(){
      ll n; cin >> n;
      vector<ll> h(n),s(n);
      ll l=0,r=INF;
      rep(i,n){
            cin >> h[i] >> s[i];
      }

     while(r-l>1){
           ll mid = (r+l)/2;
           bool ok = true;
           vector<ll> t(n,0);
           rep(i,n){
                 if(mid< h[i])ok=false;
                 else t[i] = (mid-h[i])/s[i];
           }
           sort(t.begin(),t.end());

           rep(i,n){
                 if(t[i]<i)ok=false;
           }
           if(ok) {
                 r=mid;
           }else
           {
                 l=mid;
           }
           
     }
     cout << r << endl;
}
