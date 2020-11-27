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


int main(){
  int n,k;  cin >> n >> k;
  int t[n][n];
  int array[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> t[i][j];
      array[i] = i;
    }
  }
  int check=0;
  do{
    cnt = 0;
    if(array[0]!= 0)break;
    
    for(int i=0;i<n;i++){
      int a = array[i];
      
      if(i != n-1){
        int b = array[i+1];
        cnt+=t[a][b];
      }
      else cnt += t[a][0];

    }

    if(k == cnt )ans++;
  }while(next_permutation(array,array+n));
  
  cout << ans << endl;
}
