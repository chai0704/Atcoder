#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
using P = pair<int,int>;
ll cnt =0,ans=0;

int main(){
   string s;    cin >> s ;
   ll ans = 0;
   //cout << a << " " << b << " " << c << "  " << d << endl;
   bool op[4];
   for(int b = 0;b<(1<<3);b++){
       bitset<10> bit(b);
       //cout << bit << endl;
       ans = 0;
       for(int i=0;i<3;i++){
           op[i+1] = false;
           
           if(bit.test(i)){
               op[i+1] = true;
           }else{
               op[i+1] = false;
           }
       }
       ans += s.at(0) - '0';
       for(int i=0;i<3;i++){
           if(op[i+1])ans += s.at(i+1) - '0';
           else ans -= s.at(i+1) - '0';
       }
      // cout << ans << endl;
       if(ans == 7){
           for(int i=0;i<3;i++){
               cout << s.at(i);
               if(op[i+1]){
                   cout << '+' ;
               }else{
                   cout << '-' ;
               }
           }
           cout << s.at(3) << "=7" << endl;
           return 0;
       }

   }


}
