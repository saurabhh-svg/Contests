#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    sort(s.begin(), s.end());
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        int temp = abs(s[i] - s[mid] );
        ans += temp;
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