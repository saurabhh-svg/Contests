#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, mx = 0, end = -1, ans = -1;
    vector<vector<int>> CharIdx(26);
    vector<int> ind;
    string s, temp;
    cin >> n >> s;
    temp = s;
    for (int i = 0; i < n; i++)
        CharIdx[s[i] - 'a'].push_back(i), mx = max((int)s[i] - 'a', mx);

    for (int i = 25; i > -1; i--)
        for (int j : CharIdx[i])
            if (j > end)
                ind.push_back(j), end = j;

    for (int i = 0; i < ind.size(); i++)
        temp[ind[i]] = s[ind[ind.size() - i - 1]];

    if (is_sorted(temp.begin(), temp.end()))
        ans = ind.size() - CharIdx[mx].size();

    cout << ans << endl;
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