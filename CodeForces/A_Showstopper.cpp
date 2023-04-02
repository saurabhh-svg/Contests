#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, maxA = 0, maxB = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n;i++){
        int mx = max(a[i], b[i]);
        int mn = min(a[i], b[i]);
        a[i] = mx;
        b[i] = mn;
    }
    maxA = a[n - 1], maxB = b[n - 1];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int la = a[n - 1], lb = b[n - 1];
    if (maxA==la && maxB==lb)
        cout << "Yes\n";
    else
        cout << "No\n";
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