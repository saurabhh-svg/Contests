#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool helper(vector<vector<int>> a, int x){
    int n = a.size(), m = a[0].size();
    vector<vector<int>> pre(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] >= x)  a[i][j] = 1;
            else  a[i][j] = 0;
            pre[i + 1][j + 1] = pre[i + 1][j] + pre[i][j + 1] - pre[i][j] + a[i][j];
            // pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i];
        }
    }
    for (int i = x; i <= n; i++) {
        for (int j = x; j <= m; j++)    {
            if (pre[i][j] - pre[i - x][j] - pre[i][j - x] + pre[i - x][j - x] == x * x)
                return true;
        }
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int hi = min(n, m), lo = 1, ans = 1;
    while (hi >= lo) {
        int mid = (hi + lo) / 2;
        if (helper(a, mid))  {
            ans = mid;
            lo = mid + 1;
        }  else   hi = mid - 1;
    } cout << ans << endl;
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