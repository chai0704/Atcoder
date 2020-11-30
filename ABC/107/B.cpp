#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
//using mint = modint1000000007;

int main(){
 int h,w; cin >> h >> w;
 vector<string>s(h);
 rep(i,h)cin >> s[i];

 vector<bool> row(h,false);
 vector<bool> col(w,false);

 for(int i=0;i<h;i++){
   for(int j=0;j<w;j++){
     if(s[i][j] == '#'){
     row[i] = true;
     col[j] = true;
     }

   }
 }

 rep(i,h){
   if(row[i]){
     rep(j,w){
       if(col[j])cout << s[i][j];
     }
     cout << endl;
   }
   
 }


}
