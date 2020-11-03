#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,n) for(ll i=0;i<n;i++)
#define inf 999999999
const int mod = 1000000007;
ll cnt = 0;
// cout << fixed  << setprecision(10);

int main(){
    cout << fixed  << setprecision(10);
    double p;   cin >> p;
    double ans;
   

    ans = -1.5*log2(3/(2*p*log(2)));
    if(ans<=0){
        cout << p << endl;
        return 0;
    }
    cout << ans+p*pow(2,-2*ans/3) << endl;


}
