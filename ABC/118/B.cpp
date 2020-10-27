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
    map<ll,ll>mp;
    int n,m;    cin >> n >> m;
    int k[n];
    int a[n][35];
    for(int i=0;i<n;i++){
        cin >> k[i];
        for(int j=0;j<k[i];j++){
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }
    for(int i=1;i<=m;i++){
        if(mp[i]==n)ans++;
    }

    cout << ans << endl;
}
