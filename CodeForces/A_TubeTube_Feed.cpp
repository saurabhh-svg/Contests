#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int time = 0, mx = INT_MIN, ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (time + a[i] <= t)
        {
            if (b[i] > mx)
            {
                ans = i + 1;
                mx = b[i];
            }
        }
        time++;
    }
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