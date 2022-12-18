#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int k, n, last = 0;
    cin >> k >> n;
    int diff = 0,p=1;
    vector<int> ans;
    while (p <= n) {
        p = p + diff;
        ans.push_back(p);
        diff++;
    }
    if (ans.back() > n) ans.pop_back();

    if (ans.size() < k) {
        while (k - ans.size() > (n - ans.back()))     ans.pop_back();
        last = ans.back();
        int s = ans.size();
        for (int i = 1; i <= k - s; i++)  ans.push_back(last + i);
    }
    for (int i = 0; i < k; i++)  cout << ans[i] << " ";
    cout << endl;
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