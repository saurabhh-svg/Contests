#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, p, h, ans = 0;
    cin >> n >> p >> h;
    vector<int> energy(n), power(p);
    for (int i = 0; i < n; i++)
        cin >> energy[i];

    for (int i = 0; i < p; i++)
        cin >> power[i];

    sort(energy.begin(), energy.end(), greater<int>());
    sort(power.begin(), power.end(), greater<int>());

    for (int i = 0; i < min(n, p); i++)
    {
        int temp = h * power[i];
        ans += min(temp, energy[i]);
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