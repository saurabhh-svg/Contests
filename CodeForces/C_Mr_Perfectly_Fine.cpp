#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    int one = INT_MAX, two = INT_MAX,ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int t;
        string s;
        cin >> t >> s;
        if(s=="01")one = min(t, one);
        if (s == "10") two = min(t, two);
        if(s=="11")
            ans = min(ans, t);
    }
    if ((one == INT_MAX || two == INT_MAX)&&(ans==INT_MAX))
    {
        cout << -1 << endl;
        return;
    }
    ans = min(ans, one + two);
    cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }