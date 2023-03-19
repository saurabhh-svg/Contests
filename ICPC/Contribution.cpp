#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string u, d;
    int ans = 0;
    cin >> u >> d;
    map<char, int> mp;
    mp['1'] = 1;
    mp['3'] = 4;
    mp['5'] = 6;
    mp['7'] = 9;
    for (auto i : u)
        ans += mp[i];
    for (auto i : d)
        ans -= mp[i];
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