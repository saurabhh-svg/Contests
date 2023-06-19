#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, mx = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(v[i], mx);
    }

    sort(v.begin(), v.end());
    vector<int> count(200, 0);

    for (int i = 0; i < n; i++)
        count[v[i]]++;

    for (int i = 1; i <= mx; i++)
    {
        if (count[i - 1] < count[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}