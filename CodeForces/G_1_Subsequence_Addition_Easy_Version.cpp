#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (v[0] != 1)
    {
        cout << "NO\n";
        return;
    }
    sum = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] <= sum) sum += v[i];
        else  {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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