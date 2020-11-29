#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 1LL << 60;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;
const int x = 100;
double dp[x+1][x+1][x+1];


int main(){
  cout << setprecision(11) << fixed;
  int a,b,c;  cin >> a >> b >> c;
  


  for(int i = x-1 ; i >= 0 ; --i){
    for(int j = x-1 ; j >= 0 ; --j){
      for(int k = x-1 ; k >= 0 ; --k){
        if(i+j+k == 0)continue;
        double now = 0;
        now += dp[i+1][j][k]*i;
        now += dp[i][j+1][k]*j;
        now += dp[i][j][k+1]*k;
        dp[i][j][k] = now/(i+j+k) + 1;
      }
    }
  }
  cout  << dp[a][b][c] << endl;
}
