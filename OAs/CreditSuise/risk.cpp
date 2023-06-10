#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k, ret = 0, v, p = 0;
    cin >> k >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)  cin >> prices[i];
    priority_queue<int> profits;
    stack<pair<int, int> > vp_pairs;
    while (p < n)
    {
        for (v = p; v < n - 1 && prices[v] >= prices[v + 1]; v++)
            ;
        for (p = v + 1; p < n && prices[p] >= prices[p - 1]; p++)
            ;
        while (!vp_pairs.empty() && prices[v] < prices[vp_pairs.top().first])
        {
            profits.push(prices[vp_pairs.top().second - 1] - prices[vp_pairs.top().first]);
            vp_pairs.pop();
        }
        while (!vp_pairs.empty() && prices[p - 1] >= prices[vp_pairs.top().second - 1])
        {
            profits.push(prices[vp_pairs.top().second - 1] - prices[v]);
            v = vp_pairs.top().first;
            vp_pairs.pop();
        }
        vp_pairs.push(pair<int, int>(v, p));
    }
    while (!vp_pairs.empty())
    {
        profits.push(prices[vp_pairs.top().second - 1] - prices[vp_pairs.top().first]);
        vp_pairs.pop();
    }
    for (int i = 0; i < k && !profits.empty(); i++)
    {
        ret += profits.top();
        profits.pop();
    }

    cout << ret << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}