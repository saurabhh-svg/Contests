#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), pre(n, 0), freq(n + 1, 0), rem(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    pre[0] = b[0];
    for (int i = 1; i < n; i++)
        pre[i] = b[i] + pre[i - 1];

    for (int i = 0; i < n; i++) {
        int val = a[i];
        if (i > 0)
            val += pre[i - 1];
        int ind = upper_bound(pre.begin(), pre.end(), val) - pre.begin();
        freq[ind]++;
        int rm = val;
        if (ind > 0)
            rm -= pre[ind - 1];
        rem[ind] += rm;
    }
    for (int i = 1; i <= n; i++)
        freq[i] += freq[i - 1];

    for (int i = 0; i < n; i++)
        cout << (i + 1 - freq[i]) * b[i] + rem[i] << " ";
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