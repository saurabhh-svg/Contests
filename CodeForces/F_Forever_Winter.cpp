#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, y, x;
    cin >> n >> m;
    map<int, int> degree, count;
    // counting degree of each vertex
    for (int j = 0; j < m; j++)
    {
        int u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }
    // finding the number of times a degree as appeared
    for (auto i : degree)
        count[i.second]++;

    // count = 1 -> x(degree)
    // count = x -> y+1(degree)
    // count = x*y -> 1(degree) terminal node
    vector<int> v;

    for (auto i : count)
        v.push_back(i.second);

    sort(v.begin(), v.end());

    if (v.size() == 3)
        cout << v[1] << ' ' << v[2] / v[1] << '\n';
    else
        cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
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