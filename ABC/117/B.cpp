#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
const double pi = acos(-1);
ll cnt =0,ans=0;
//cout << setprecision(11) << fixed;
int main(){
    int n;  cin >> n;
    int m=0;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        ans+=a;
        m=max(m,a);
    }
    if(m<ans-m){
        cout << "Yes" << endl;
        return 0;
    }else cout << "No" << endl;
   // cout << ans-m << endl;
}
