
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int getMaximumGreyness(vector<string> pixels)
{
    int n = pixels.size(), m = pixels.back().length(), ans = INT_MIN;
    vector<int> row(n), col(m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pixels[i][j] == '1')
            {
                row[i]++;
                col[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ones = row[i] + col[j];
            int zeroes = n - row[i] + m - col[j];
            ans = max(ans, ones - zeroes);
        }
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    getMaximumGreyness(v);
}
