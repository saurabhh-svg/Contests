#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
int n; cin>>n;
int s1 = 0, s2 = 0;
for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    if(x>0)
        s1 += x;
    else
        s2 += x;
}
int ans = abs(s1 + s2);
cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }