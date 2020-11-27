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
  vector<pair<int,int>> event;

  for(int i=0;i<n;i++){
    int s,t,p;
    cin >> s >> t >> p;
    event.push_back(make_pair(s,p));
    event.push_back(make_pair(t,-p));
  }

  sort(event.begin(),event.end());

  ll crr =0;
  for(auto [time,value]:event){
    crr+=value;
    if(crr>w){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

}
