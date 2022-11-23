#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, mn = INT_MAX;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)   {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    int ans = mn * n;

    int temp = 0, min_now = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(v[i]<mn) {
            mn = v[i];
            ans = max(ans, temp);
            temp = 0;
        }
        else{
            temp += mn;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        solve();
}