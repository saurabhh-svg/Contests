#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, even = 0;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mp[abs(a[i] - a[j])]++;
        }
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == 0 || (even > 1 && n - even > 1))
        {
            cout << "NO\n";
            return;
        }
        mp[a[i] - a[i - 1]]++;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
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