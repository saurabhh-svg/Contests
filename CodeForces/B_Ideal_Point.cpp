#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k, l, r;
    cin >> n >> k;
    vector<int> pref(100, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (k >= l && k <= r)
        {
            for (int j = l; j <= r; j++)
                pref[j]++;
        }
    }
    for (int i = 1; i <= 50; i++)
    {
        if (pref[i] >= pref[k] && i != k)
        {
            cout << "NO" << endl;
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