#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k, ans = 0, c = 1;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] == c)
            c++;
    }
    c = n - c+1;
    ans = c / k;
    if (c % k != 0)
        ans++;
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