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
    int prev = 0;
    bool flag = false, flag2 = false;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(v[i + 1] - v[i]);
        if (diff > prev)
            flag = true;
        if (diff < prev)
            flag2 = true;

        if (flag && flag2)
        {
            cout << "-1\n";
            return;
        }
        prev = diff;
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