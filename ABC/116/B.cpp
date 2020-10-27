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
    int s;  cin >> s;
    cnt++;
    map<ll,ll>mp;
    mp[s]++;
    while(1){
        cnt++;
        if(s%2 == 0){
            s /= 2;
        }else{
            s = s*3+1;
        }

        mp[s]++;
        if(mp[s] == 2){
           // cout << s << endl;
            cout << cnt << endl;
            return 0;
        }
    }
}
