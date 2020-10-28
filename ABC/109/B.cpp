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
 
 int n; cin >> n ;
 string s;
 char st,l;
 map<string , ll>mp;
 for(int i=0;i<n;i++){
     cin >> s;
     mp[s]++;
     if(mp[s] >1){
         cnt++;
     }
     int n=s.size();
     st=s.at(0);
     if(i>0 && st!=l){
         cnt++;
     }

     l=s.at(n-1);
 }
 if(cnt == 0){
     cout << "Yes" << endl;

 }else{
     cout << "No" << endl;
 }
}
