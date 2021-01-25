#include <bits/stdc++.h>

using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll =  long long;
using P = pair<int,int>;
//using mint = modint1000000007;
const int MAX = 510000;
const ll MOD = 1000000007;
const ll INF = 1LL << 60;

int main(){
   int n;   cin>> n;
   string s,t;  cin >> s >> t;
   int tmp =0;
   for(int i=0;i<n;i++){
       int cnt=0;
           if(s.at(i) == t.at(0)){
               for(int j=0;i+j<n;j++){
                   if(s.at(i+j) == t.at(j))cnt++;
               }
           }
       tmp = max(tmp,cnt);
   }
   if(s == t){
       cout << n << endl;
       return 0;
   }
   cout << 2*n-tmp << endl;
}
