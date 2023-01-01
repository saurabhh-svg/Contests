#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int mn = 1, mx = n;
    k -= 1;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)  {
        if (!ans[i]) {
            ans[i] = mx--;
            if (i + k < n) ans[i + k] = mn++;   
        }
    }
    for (auto i : ans)  cout << i << " ";
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