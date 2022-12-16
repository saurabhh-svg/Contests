#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n - 1];
    int x;
    cin >> x;
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    sort(a, a + n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > x)
            x = x + ((a[i] - x) / 2) + ((a[i] - x) % 2);
    }
    cout << x << endl;
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