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

bool solve(string s) {
  if(s.size() == 1){
    return s[0] - '0' == 8;
  }
  if(s.size() == 2){
    int x =atoi(s.c_str());
    if(x % 8 == 0)return true;
    int y = x%10 * 10 + x/10;
    if(y % 8 == 0)return true;
    return false;
  }
  vector<int> cnt(10);
  for(char c:s)cnt[c-'0']++;
  for(int i=0;i<1000;i+=8){
    int x = i;
    vector<int> nc(10);
    rep(j,3){
      nc[x%10] ++;
      x /= 10;
    }
    bool ok = true;
    rep(j,10) if(nc[j] > cnt[j]) ok = false;
    if(ok) return true;
  }
  return false;
}

int main(){
 string s;  cin >> s;

 if(solve(s))cout << "Yes" << endl;
 else cout << "No"  << endl;


}
