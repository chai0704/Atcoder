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
  int n , w;  cin >> n >> w;
  ll cum[200010];
  rep(i,200009)cum[i]=0;
  for(int i=0;i<n;i++){
    int s,t,p;
    cin >> s >> t >> p;
    cum[s]+=p;
    cum[t]-=p;
  }
  
  for(int i=0;i<200005;i++){
    
    cum[i+1] += cum[i];
    if(cum[i]>w){
      cout << "No"<< endl;
      return 0;
    }
  }
  cout << "Yes"<< endl;
}
