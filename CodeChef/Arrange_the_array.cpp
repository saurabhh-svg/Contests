#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }
    int a = 0, b = 0, mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] < mn)
        {
            a = i + 1;
            b = i;
            mn = v[i + 1] - v[i];
        }
    }
    swap(v[a], v[b]);

    for (auto i : v)
        cout << i << " ";
    cout << endl;
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