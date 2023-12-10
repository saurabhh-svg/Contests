#include <bits/stdc++.h>
#define int long long int
using namespace std;

int find(int n, int k)
{

    int i = 0;

    while (i <= n)
    {
        i += k;
    }
    return i - n;
}

void solve()
{
    int n, k, ans = INT_MAX;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (auto i : v)
    {
        // cout << find(i,k)<<" ";
        if (i % k == 0)
        {
            ans = 0;
            break;
        }

        ans = min(ans, find(i, k));
    }

    cout << ans << endl;
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