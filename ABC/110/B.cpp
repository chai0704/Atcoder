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
 int n,m,x,y;
 cin >> n >> m >> x >> y;
 int px[n],py[m];
 int maxx,miny;
 maxx=x;
 miny=y;
 for(int i=0;i<n;i++){
     cin >> px[i];
     maxx=max(px[i],maxx);
 }
 for(int i=0;i<m;i++){
     cin >> py[i];
     miny=min(py[i],miny);
 }
 //cout << miny << endl;
 if(miny<=maxx)cout <<"War" << endl;
 else cout << "No War" << endl;

}
