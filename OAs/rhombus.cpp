#include <bits/stdc++.h>
#define int long long int
using namespace std;
int solve(vector<vector<int>> &v, int r)
{
    int n = v.size(), m = v[0].size(), ans = 0;
    for (int i = r; i < n - r; i++)
    {
        int sum = 0;
        for (int j = r; j < m - r; j++)
        {
            for (int k = 0; k < r; k++)
            {
                sum += v[i - r + k][j - r + k];
            }
            for (int k = 1; k < r; k++)
            {
                sum += v[i - r - k][j - r + k];
            }
            for (int k = 1; k < r; k++)
            {
                sum += v[i + r - k][j + r - k];
            }
            for (int k = 1; k < r; k++)
            {
                sum += v[i + r - k][j + r - k];
            }
        }
        ans = max(ans, sum);
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> v;
    v = {{10, 0, 4, 2, 7, 3}, {6, 2, 7, 2, 1, 1}, {4, 1, 4, 5, 3, 0}, {3, 5, 2, 1, 4, 6}, {3, 4, 6, 1, 0, 4}, {3, 4, 6, 1, 0, 4}};
    int r = 2;
    cout << solve(v, r);
}