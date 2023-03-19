#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int a, b, c, d,ans=0;
    cin >> a >> b >> c >> d;
    int y = (d - b);
    int x = (a + y - c);
    if(x<0 || y<0) cout << -1 << endl;
     else   cout << x + y << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }