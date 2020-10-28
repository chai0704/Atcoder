#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 999999999
const int mod = 1000000007;
ll cnt = 0;
ll int gcd(ll x,ll y){
   return y ? gcd( y , x%y ) : x;
}
 ll ngcd(vector<ll> a){/*gcd呼ぶのを忘れない*/
 int res;  res=a[0];
 for(int i=0;i<a.size() && res != 1 ; i++){
    res = gcd( a[i] , res );
 }
 return res;
 }
int main(){
 ll n , X;  cin >> n >> X;
 vector<ll>a;
 for(int i=0;i<n;i++){
     ll b;
     cin >> b;
     a.push_back(b);
 }
 a.push_back(X);
 sort(a.begin(),a.end());
 vector<ll>b;
 for(int i=0;i<n;i++){
     ll c;
     c=a[i+1]-a[i];
     b.push_back(c);
 }
 cout << ngcd(b) << endl;


}
