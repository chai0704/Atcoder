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
   string s;    cin >> s;
   cnt = INF;
   for(int i=0;i<s.size()-2;i++){
       int a,b,c;
       a=s.at(i)-'0';
       b=s.at(i+1)-'0';
       c=s.at(i+2)-'0';
       ans = a*100 + b*10 + c;
       cnt = min(abs(753-ans),cnt);
   }
   cout << cnt << endl;
}
