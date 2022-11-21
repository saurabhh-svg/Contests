#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, mx = INT_MIN, m = -1;
    cin >> n;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(a[i], mx);
    }
    b = a;
    sort(b.begin(), b.end());
    if (n > 1)
        m = b[n - 2];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
            cout << a[i] - m << " ";
        else
            cout << a[i] - mx << " ";
    }
    cout << endl;
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