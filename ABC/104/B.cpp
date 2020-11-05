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

  //int n , k;  cin >> n ;
  string s; cin >> s;
 
  int n= s.size();

  if(s.at(0) !='A'){
    cout << "WA" << endl;
    return 0;
  }
  int b=0;

  for(int i=2;i<n-1;i++){
    if(s.at(i) == 'C'){
      cnt++;
    b=i;
    }
    if(cnt>1){
      cout << "WA" << endl;
           

      return 0;
    }

  }

  if(cnt ==0){
    cout <<"WA" << endl;
    return 0;
    }
  for(int i=1;i<n;i++){
    int a=s.at(i);
    //cout << a << endl;

   if(a<=90 && i!=b ){
     cout <<"WA" <<endl;
     // cout <<1 << endl;
     return 0;
   }

  }

  cout <<"AC" << endl;

}
