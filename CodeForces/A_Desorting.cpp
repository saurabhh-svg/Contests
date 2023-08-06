#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, diff = INT_MAX;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n - 1; i++)  diff = min(diff, v[i + 1] - v[i]);

    if (diff < 0)
        cout << 0 << endl;
    else if (diff == 0)
        cout << 1 << endl;
    else
        cout << 1+ (diff / 2) << endl;
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