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
 int a,b,c; cin >> a >> b >> c;
 int maxa,maxb,maxc;
 maxa=10*a+b+c;
 maxb=10*b+a+c;
 maxc=10*c+b+a;
 cout << max(maxa,max(maxb,maxc)) << endl;


}
