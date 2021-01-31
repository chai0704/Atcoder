#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
#define rep(i,n) for(int i=0;i<n;i++)
const double pi = acos(-1);
using P = pair<int,int>;
ll cnt =0,ans=0;

int main(){
    int n;  cin >> n;

    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    double maxdist = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int distx,disty;
            distx = abs(x[i] - x[j]);
            disty = abs(y[i] - y[j]);

            maxdist = max(maxdist , pow(distx,2) + pow(disty,2));
        }
    }

    float ans ;
    ans = pow(maxdist,0.5);
    cout << ans << endl;
}
