#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, odd = 0, count = 0;
    cin >> n;
    int a[n];
    vector<int> o, e;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
            o.push_back(i + 1);
        else
            e.push_back(i + 1);
    }
    if (o.size() == 0)
    {
        cout << "NO\n";
        return;
    }
    if (o.size() == n && o.size() < 3)
    {
        cout << "NO\n";
        return;
    }
    if (o.size() < 3 && e.size() == 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if (o.size() >= 3)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << o[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << o[0] << " " << e[0] << " " << e[1] << endl;
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