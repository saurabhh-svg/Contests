#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for (int i = 0; i < n; i++) mp[s[i]].push_back(i);

    for (auto i : mp)
    {
        int temp = i.second[0] % 2 == 0 ? 0 : 1;
        for (auto j : i.second)
        {
            if (j % 2 != temp)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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