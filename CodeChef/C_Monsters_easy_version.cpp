#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isOk(int mid, vector<int> health)
{
    int n = health.size();
    vector<int> v;
    int i = 1;
    while (i == health[i - 1])
        i++;
    for (int j = i - 1; j < n; j++)
    {
        if (health[j] - mid - i + 1 > 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> health(n);
    for (int i = 0; i < n; i++)
        cin >> health[i];
    sort(health.begin(), health.end());

    int hi = n, lo = 0;
    while (lo <= hi)
    {
        int mid = (hi + lo) / 2;
        if (isOk(mid, health))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
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