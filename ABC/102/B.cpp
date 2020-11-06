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
  int n;cin >> n;

  ll a[n];
  ll maxa = 0;
  ll mina = INF;

  rep(i,n){
    cin >> a[i];
     maxa = max(a[i],maxa);
     mina = min(a[i],mina);
    }

    cout << maxa - mina << endl;
  
}
