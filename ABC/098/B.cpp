#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int n;
 string s;
 cin >> n >> s;

 int ans = 0;

 for(int i=0;i<n;i++){
   int cnt = 0;
    for(char c = 'a';c<='z';c++){
      bool right = false;
      bool left = false;

      for(int j=0;j<i;j++){
        if(s[j] == c)left = true;
      }
      for(int j=i;j<n;j++){
        if(s[j] == c)right = true;
      }
      if(left && right)cnt++;
    }
    if(ans<cnt)ans = cnt ;
 }
 cout << ans << endl;
}
