#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = i;
    }
    string ans = "";
    priority_queue<pair<int, string>> pq;

    for (auto i : mp)
        pq.push({i.second, i.first});

    while (!pq.empty())
    {
        string str = pq.top().second;
        pq.pop();
        int l = str.size();
        ans += (str[l - 2]);
        ans += (str[l - 1]);
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}