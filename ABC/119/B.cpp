#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
ll cnt =0,ans=0;
//cout << setprecision(11) << fixed;
int main(){
  cout << setprecision(11) << fixed;

  double answ=0.0;
  int n;  cin >> n;
  for(int i=0;i<n;i++){
    double x;
    string s;
    cin >> x >> s;
    if(s=="JPY")answ+=x;
    else answ+=x*380000.0;
  }
  cout << answ <<endl;
}
