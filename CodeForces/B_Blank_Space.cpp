#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int n;
cin >> n;
vector<int> v(n);
for (int i = 0; i < n;i++)
    cin >> v[i];

int c = 0,ans=0;
if(v[0]==0) c = 1;
ans = max(ans, c);
for (int i = 1; i < n; i++)
{
    if(v[i]==0 && v[i-1]==0)  c++;
    else if(v[i]==0 && v[i-1]!=0)  c = 1;
    else c = 0;
    ans = max(ans, c);
}
cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }