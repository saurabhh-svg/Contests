#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp, count, kthOccurence;
    map<int, int> c, reversekthOccurence;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        count[v[i]]++;
        mp[i] = v[i];
        if (count[v[i]] == k)
            kthOccurence[v[i]] = i;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        c[v[i]]++;
        if (c[v[i]] == k)
            reversekthOccurence[v[i]] = i;
    }

    if ((count[v[0]] < k || count[v[n - 1]] < k) && mp[0] == mp[n - 1])
    {
        cout << "NO\n";
        return;
    }

    if (mp[0] != mp[n - 1] && ( count[v[0]] < k || count[v[n - 1]] < k || kthOccurence[v[0]] > reversekthOccurence[v[n - 1]]))
    {
        cout << "NO\n";
        return;
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