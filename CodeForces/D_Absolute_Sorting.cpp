#include <bits/stdc++.h>
#define int long long int
using namespace std;

void helper(int lo, int hi, vector<int> v, int n, int &ans)
{
    int mid = (lo + hi) / 2, flag = 0;
    if (lo <= hi)
    {
        mid = (lo + hi) / 2;
        for (int i = 0; i < n - 1; i++)
        {
            if ((abs(v[i] - mid)) > (abs(v[i + 1] - mid)))
            {
                if (v[i] > v[i + 1])
                    flag = 1;
                else
                    flag = 2;
                break;
            }
        }
        if (flag == 1)
            helper(mid + 1, hi, v, n, ans);
        else if (flag == 2)
            helper(lo, mid - 1, v, n, ans);
        else
        {
            ans = mid;
            return;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = -1;
    helper(0, 1e9, v, n, ans);
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