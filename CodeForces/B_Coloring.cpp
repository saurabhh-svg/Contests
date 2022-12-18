#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, k, count = 0;
    cin >> n >> m >> k;
    int groups = n / k;
    int rem = n % k;
    vector<int> v(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= m; i++)
    {
        if (v[i] > groups + 1)
        {
            cout << "NO\n";
            return;
        }
        if (v[i] > groups)
            count++;
    }

    if (count > rem)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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