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
 
 int k; cin >> k;

 for(int i=1;i<=k;i++){
     for(int j=1;j<=i;j++){
         if(i%2 == 0 && j%2 == 1){
             cnt ++;
         }
         if(i%2 == 1 && j%2 ==0){
             cnt++;
         }
     }
 }
 cout << cnt << endl;
}
