#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int t)
{
    int i = 0, j, k, n, m, cnt = 0;
    cin >> n;
    string s, s1;
    cin >> s >> s1;
    vector<int> v;
    map<int, vector<int>> ma;
    for (k = 0; k < n; k++)
    {
        if (s1[k] == s[0])
            ma[k].push_back(k);
    }
    i++;
    cout << "Case " << t << ": ";
    for (j = 1; j < n; j++)
    {
        map<int, vector<int>> temp;
        for (auto x : ma)
        {
            for (auto t : x.second)
            {
                if (t != 0 && s1[t - 1] == s[i])
                {
                    if (find(x.second.begin(), x.second.end(), t - 1) == x.second.end())
                        ma[x.first].push_back(t - 1);
                }
                if (t != n - 1 && s1[t + 1] == s[i])
                {
                    if (find(x.second.begin(), x.second.end(), t + 1) == x.second.end())
                        ma[x.first].push_back(t + 1);
                }
            }
        }
        i++;
        if (i == n)
            break;
    }
    for (auto x : ma)
    {
        if (x.second.size() == n)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
}