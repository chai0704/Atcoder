#include <bits/stdc++.h>

using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll =  long long;
using P = pair<int,int>;
//using mint = modint1000000007;
const int MAX = 510000;
const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main(){
  ll n ;  cin >> n;

  vector<string>s;
  rep(i,n){
    string t;
    cin >> t;
    s.push_back(t);
  }
 map<char,ll >ansmp;
 for(char c = 'a' ;c<='z' ;c++){
      ansmp[c] = INF;
    }
   


  for(int i=0;i<n;i++){
    int m = s.at(i).size();
    map<char,ll>mp;
    for(char c = 'a' ;c<='z' ;c++){
      mp[c] = 0;
    }
   
    for(int j=0;j<m;j++){
      mp[s.at(i).at(j)]++;
    }

    for(char c = 'a' ;c<='z' ;c++){
      ansmp[c] = min(ansmp[c],mp[c]);
    }


  }

for(char c = 'a' ;c<='z' ;c++){
      ll tmp = ansmp[c];
      for(ll i=0;i<tmp;i++){
        cout << c;
      }
    }
cout << endl;



}
