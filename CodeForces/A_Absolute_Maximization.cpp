#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a = v[0], o = v[0];
    for (int i = 1; i < n; i++)
    {
        a &= v[i];
        o |= v[i];
    }
    cout << o - a << endl;
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