#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool ans;

void check(int x, vector<int> a)
{
    vector<int> b;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != x)
            b.push_back(a[i]);
    for (int i = 0; i < b.size(); ++i)
        if (b[i] != b[b.size() - 1 - i])
            return;
    ans = true;
}

void solve()
{
    int n;
    cin >> n, ans = true;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != a[n - 1 - i])
        {
            ans = false;
            check(a[i],a);
            check(a[n - 1 - i],a);
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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