#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isOk(vector<int> &v, int mid, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = i + 1;
        if (v[i] >= curr - mid)  c++;
        else if (v[i] <= curr + mid) c++;
    }
    if (c > (n - (mid / 2 + mid % 2)))
        return false;
    return true;
}
void solve()
{
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int lo = 0, hi = (n / 2) + (n % 2), ans = hi;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (isOk(v, mid, n))  {
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