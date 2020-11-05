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
      string s; cin >> s;
      ll k;  cin >> k;
       ll n = s.size();
       if(k==1){
         cout << s.at(0) << endl;
         return 0;
       }
      
      for(int i=0;i<n;i++){
        if(s.at(i) == '1') cnt++;
        else break;
      }

      if(cnt >= k){
      cout << 1 << endl;
      return 0;
      }

      for(int i=0;i<n;i++){
        if(s.at(i) !='1'){
          cout << s.at(i) << endl;
          return 0;
        }

        if(s.at(i)=='1' && i==n-1){
          cout << 1 << endl;
          return 0;
        }
      }
}
