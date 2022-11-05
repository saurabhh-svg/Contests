#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, mn;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    mn = v[0];
    for (int i = 1; i < n; i++)
        mn = min(mn, v[i]);
    if (mn < v[0])
        cout << "Alice\n";
    else
        cout << "Bob\n";
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