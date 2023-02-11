#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> pref(n, 0), suff(n, 0), v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (v[0] == 2)
        pref[0] = 1;
    if (v[n - 1] == 2)
        suff[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == 2)
            pref[i] = pref[i - 1] + 1;
        else
            pref[i] = pref[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] == 2)
            suff[i] = suff[i + 1] + 1;
        else
            suff[i] = suff[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (pref[i] == suff[i + 1])
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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