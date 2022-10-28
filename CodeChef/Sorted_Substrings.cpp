#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    while (i < n - 1)
    {
        if (s[i] > s[i + 1])
            ans++;
        i++;
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