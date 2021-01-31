#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
using P = pair<int,int>;
ll cnt =0,ans=0;

int main(){
   string s;
   cin >> s;

   ll ans = 0;
   int n = s.size() -1;
   for(int tmp = 0;tmp < (1 << n ) ;tmp++){
       bitset<10> bit(tmp);

       ll plus = s[0] - '0';
       for(int i=0;i<n;i++){
           if(bit.test(i)){
               
              ans += plus;
              plus = 0;
           }
               plus = 10* plus + s[i+1] -'0';
              
           

       }
      ans += plus ;
   }
   cout << ans << endl;
}
