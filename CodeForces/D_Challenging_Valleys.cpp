#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, mn = INT_MAX, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            i++;
            while (a[i] == a[i - 1] && i < n)
                i++;
            if (i == n || a[i] > a[i - 1])
                c++;
        }
    }
    if (n > 1)
    {
        if (a[0] < a[1])
            c++;
        if (a[n - 1] > a[n - 2])
            c++;
    }

    if (c <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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