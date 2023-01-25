#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            oneCount++;
    }
    int ans = n - oneCount;
    ans = ans + (oneCount / 2) + (oneCount % 2);
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