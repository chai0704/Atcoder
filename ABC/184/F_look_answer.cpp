#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
const ll INF = 10e7+7;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
const ll MOD = 1000000007; 
ll cnt =0,ans=0;
typedef pair<int , int > P;
//cout << setprecision(11) << fixed;
const int di[] = {0,0,-1,1};
const int dj[] = {1,-1,0,0};


int main(){
  int N,T;  cin >> N >> T ;

  vector<int> a(N);
  rep(i,N) cin >> a[i];

  vector<ll>s,t;
  s = t = {0};

  for(int i=0;i<N;i++){
    for(int j = s.size()-1;j>=0;j--){
      s.push_back(s[j]+a[i]);
    }
    swap(s,t);
  }

  sort(s.begin(),s.end());

  for(auto x : t){
    if(x>T)continue;
    ll si = upper_bound(s.begin(),s.end(),T-x) - s.begin();
    ans=max(ans,x+s[si-1]); 
  }
  cout << ans << endl;
}
