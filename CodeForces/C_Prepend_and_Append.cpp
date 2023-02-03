#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans;
    cin >> n;
    string s;
    cin >> s;
    ans = n;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i++] != s[j--])
            ans -= 2;
        else
            break;
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