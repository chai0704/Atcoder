#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;


int main(){
   int h,w;
   cin >> h >> w;
   char f[h][w];

   rep(i,h){
     rep(j,w){
       cin >> f[i][j];
     }
   }

   for(int i=0;i<h;i++){
     ll tmp = 0;
     for(int j = 0;j<w;j++){
       if(f[i][j] == '#')tmp++;
       if(f[i+1][j] == '#')tmp++;
       if(f[i+1][j+1] == '#')tmp++;
       if(f[i][j+1] == '#')tmp++;

       if(tmp == 1 || tmp == 3)ans++;
       tmp = 0;
     }
     
     
     tmp = 0;
   }

   cout << ans << endl;

}
