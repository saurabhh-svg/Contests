#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int ans = 1, n;
    cin >> n;
    vector<int> v(n),diff;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        int d = v[i] - i - 1;
          diff.push_back(d);
    }
    ans = diff[0];
    for (int i = 1; i < diff.size(); i++)
        ans = __gcd(ans, abs(diff[i]));

        cout << ans<< endl;
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