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

  string s,t; cin >> s >> t;
  int n = s.size();

  bool flag = false;
  for(int i=0;i<n;i++){
    if(s == t){
      flag = true;
      break;
    }
    s = s.back() + s.substr(0,n-1);
  }
  if(flag)cout << "Yes" <<endl;
  else
  {
    cout << "No" <<endl;
  }
  return 0;
  
}
