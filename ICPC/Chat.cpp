#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a[N], b[N];

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        vector<pair<int, int>> ans;
        for (int i = 1; i <= n; i++)
        {
            int j = lower_bound(b + 1, b + n + 1, a[i]) - b;
            if (j != i && j <= n)
            {
                ans.push_back({i, j});
                a[i] ^= a[j];
            }
        }
        cout << ans.size() << endl;
        for (auto p : ans)
        {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}