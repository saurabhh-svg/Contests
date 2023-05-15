#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, p = 0, q = 0, ans = 0;
    cin >> n;
    vector<int> b(n), c(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = b[i] * (pow(2, i));
    }

    pref[1] = c[0];
    for (int i = 1; i < n; i++)
        pref[i + 1] = pref[i] + c[i];

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        // for (int j = 0; j < i; j++)
        // {
        //     if (pref[i] - pref[j] > 0)  p++;
        //     else if (pref[i] - pref[j] < 0)  q++;
        // }
        if (pref[i] > 0)
            p++;
        for (auto j : mp)
        {
            if (pref[i] - j.second < 0)
                q++;
        }
    }

    ans = abs(p - q);
    cout << ans << endl;
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

/*
1 -1 3 11


*/