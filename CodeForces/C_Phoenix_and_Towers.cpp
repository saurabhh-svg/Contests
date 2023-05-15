#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> heights(n);

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    // algo -> finding the tower with minimum height and adding the current height into it

    vector<int> ans(n);
    // min heap pq
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // height of tower,ith tower index
    for (int i = 0; i < m; i++)
        pq.push({0, i});

    for (int i = 0; i < n; i++)
    {
        int h = pq.top().first;
        int ind = pq.top().second;
        pq.pop();
        ans[i] = ind + 1;
        h += heights[i];
        pq.push({h, ind});
    }
    cout << "YES\n";
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
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