#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, q, s = 0;
    cin >> n >> q;
    vector<int> v(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + v[i - 1];

    while (q--)
    {
        int l, r, k, length = 0, sum = pref[n];
        cin >> l >> r >> k;
        length = r - l + 1;
        sum -= pref[r];
        sum += (length * k) + pref[l - 1];
        if (sum & 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
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