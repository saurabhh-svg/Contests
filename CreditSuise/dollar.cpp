#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<vector<string>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i][0];
    int a[5] = {0, 1, 2, 3, 4};
    for (auto i : a)
        cout << i << " ";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}