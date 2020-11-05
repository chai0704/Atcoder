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

  int n , k;  cin >> n ;
  if( n % 7 ==0 ){
    cout << "Yes" << endl;
    return 0;
  }

  for(int i=0;i<1000;i++){
    if(n%4 ==0){
      cout << "Yes" <<endl;
      return 0;
    }
    n-=7;
    if(n<0)break;
  }
  cout << "No" << endl;
}
