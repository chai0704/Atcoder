#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
ll cnt =0,ans=0;
//cout << setprecision(11);

int main(){
  int n,q;  cin >> n >> q;

  string s; cin >> s;
  int l[q],r[q];
  for(int i=0;i<q;i++){
    cin >> l[i] >> r[i];
  }


  int b[n+1];
  b[0] = 0;
  for(int i=0;i<n-1;i++){
    if(s.at(i) == 'A' && s.at(i+1)=='C'){
      ans++;
     
     // cout << ans << " i+1= "<< i+1 << endl;
    }
     b[i+1] = ans;
  //  cout << b[i] << endl;
  }

  for(int i=0;i<q;i++){
    cout << b[r[i]-1] - b[l[i]-1] << endl;
  }



}
