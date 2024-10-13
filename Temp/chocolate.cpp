#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int n, vector<int> c)
{
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == 0)
        {
            count--;
            ans.push_back(count);
        }

        if (c[i] > 0)
            count++;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        solve(n, c);
    }
}