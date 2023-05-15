#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, mod = 1e9 + 7, ans = 1,j=0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
       while(j<n && b[j]<a[i]) j++;
       ans *= (j - i);
       ans %= mod;
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