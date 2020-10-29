#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const int MOD = 1000000007;
ll cnt =0;
ll all =0;


int main (){
    ll n ;  cin >> n;

    for(int i=1;i<=n ; i++){
        if(i % 2 == 1){
        for(int j=1;j<=n;j++){
            if(i % j == 0) cnt++;
        }
        if(cnt == 8){
            all++;
        }
        cnt =0;
        }
    }

    cout << all << endl;
  
}
