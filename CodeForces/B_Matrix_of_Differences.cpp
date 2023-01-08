#include <bits/stdc++.h>
#define int long long int
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int st = 1, en = (n * n);
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0)  ans[i][j] = st++;
            else ans[i][j] = en--;
        }
    }
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < n; j++) cout << ans[i][j] << " ";
        cout << endl;
    }
}

// Process each test case

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}