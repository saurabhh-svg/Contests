#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0, zero = 0;
    string s;
    cin >> n >> s;

    float mid = n / 2.0, prev = FLT_MAX;

    vector<int> suff(n, 0);

    suff[n - 1] = (s[n - 1] == '1');

    for (int i = n - 2; i >= 0; i--)
        suff[i] = suff[i + 1] + (s[i] == '1');

    for (int i = 0; i <= n; i++)
    {
        if (i > 0 && s[i - 1] == '0')
            zero++;

        int r = ((n - i) / 2 + (n - i) % 2);
        int l = (i / 2) + (i % 2);
        if (zero >= l && suff[i] >= r)
        {
            float curr = abs(mid - i);
            if (curr < prev || (curr == prev && i < ans))
            {
                prev = curr;
                ans = i;
            }
        }
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