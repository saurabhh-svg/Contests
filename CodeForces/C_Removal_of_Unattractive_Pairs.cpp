#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;
    priority_queue<pair<int, char>> pq;
    for (auto i : mp)
        pq.push({i.second, i.first});

    while (pq.size() > 1)
    {
        auto f = pq.top();
        pq.pop();
        auto s = pq.top();
        pq.pop();
        if(f.first>1)
        pq.push({f.first - 1, f.second});
        if(s.first>1)
        pq.push({s.first - 1, s.second});
        count += 2;
    }
    cout << n - count << endl;
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