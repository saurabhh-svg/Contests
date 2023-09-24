#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    int ans = 0, count = 0;
    map<int, int> c;
    c[5] = 5;
    c[6] = 4;
    c[7] = 3;
    c[8] = 2;
    c[9] = 1;
    c[4] = 5;
    c[3] = 4;
    c[2] = 3;
    c[1] = 2;
    c[0] = 1;
    for (int i = 0; i < 10; i++) {
        cin >> s;
        for (int j = 0; j < 10; j++) {
            if (s[j] == 'X')  {
                int mn = min(c[i], c[j]);
                ans += mn;
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