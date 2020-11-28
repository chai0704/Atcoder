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



int dignum(ll n){
int res = 0;
while(n > 0){
  res ++;
  n /= 10;
}
return res;
}

int digsum(ll n){
int res = 0;
while(n > 0){
  res += n%10;
n /= 10;
}
return res;
}

int main(){
  ll n; cin >> n;

  ll a = digsum(n);//ketawa
  ll num = dignum(n);
  
  if(a % 3 == 0){
    cout << 0 << endl;
    return 0;
    }

  if(num == 1){
    cout << -1 << endl;
    return 0;
    }

  if(a%3 == 1){
    for(int i=0;i<num ;i++){
      int b = n%10;
      n /= 10;


      if(b == 1 || b == 4 || b == 7){
        cout << 1 << endl;
        return 0;
      }
       if( (b == 2 || b == 5 || b == 8) && num != 2)cnt++;

    }

     if(cnt == 2){
         cout << 2 << endl;
         return 0;
       }
    cout << -1 << endl;
    return 0;

  }
  

  if(a%3 == 2){
    for(int i=0;i<num ;i++){
      int b = n%10;
      n /= 10;
      if(b == 2 || b == 5 || b == 8){
        cout << 1 << endl;
        return 0;
      }

       if( (b == 1 || b == 4 || b == 7) && num != 2)cnt++;
    }

    if(cnt == 2){
         cout << 2 << endl;
         return 0;
       }

    cout << -1 << endl;
    return 0;

  }



  
}
