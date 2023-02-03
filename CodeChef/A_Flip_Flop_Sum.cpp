#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0;
    bool flag = true;
    cin >> n;
    vector<int> pref(n);
    for (int i = 0; i < n; i++) {
        cin >> pref[i];
        ans += pref[i];
    }
    if (ans == n) {
        cout << ans - 4 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i += 1) {
        if (pref[i] == pref[i + 1] && pref[i] == -1) {
            cout << ans + 4 << endl;
            return;
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