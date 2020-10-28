#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define INF 999999999
#define rep(i,n) for(int i=0;i<n;i++)
const ll MOD = 1000000007;
const double pi = acos(-1);
int cnt =0,ans=0;
//cout << setprecision(11) << fixed;
int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int left = x1-x2;
    int up = y1-y2;

    int x3 = x2+up;
   int y3 = y2-left;
   int x4 = x3+left,y4 = y3+up;
   cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
