#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;
ll len =0;
ll cnt =0;
ll ans =0;

int main(){
 ll n,x,m;
 cin >> n >> x >> m;

 
 vector<int> id(m,-1);
 vector<int> a;
 while(id[x] == -1){
   a.push_back(x);
   id[x] = len;
   len++;
   cnt += x;
   x = (x*x)%m; 
 }

 int c = len -id[x];//周期

 ll s= 0;

 for(int i=id[x];i<len ;i++)s+=a[i];//周期和

 if(n <= len){
   for(int i=0;i<n;i++){
     ans += a[i];
   }
 }else{
   ans += cnt;
   n -= len;
   ans += s*(n/c);
   n %= c;
   rep(i,n) ans += a[id[x]+i];
 }
 cout << ans << endl;
 return 0;
}
