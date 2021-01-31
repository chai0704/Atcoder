#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
using P = pair<int,int>;
ll cnt =0,ans=0;

int main(){
   int k,s; cin>> k >> s;

   for(int i=0;i<=k;i++){
       for(int j=0;j<=k;j++){
           
               if(k >= s-i-j && s-i-j >= 0){
                   ans++;
                   //cout << i << " " << j << " " << l << endl;
               }
           
       }
   }

   cout << ans << endl;
}
