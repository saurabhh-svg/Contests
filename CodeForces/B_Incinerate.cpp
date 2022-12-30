#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int h[n], p[n];
    vector<pair<int, int>> hp;
    for (int i = 0; i < n; i++) cin >> h[i];

    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) hp.push_back({p[i], h[i]});

    sort(hp.begin(), hp.end());

    int attack = 0, j = 0;
    while (j < n && k > 0){
        attack += k;
        while (hp[j].second <= attack && j < n) j++;
        if (j >= n)  break;
        k -= hp[j].first;
    }
    if (k <= 0)  cout << "NO\n";
    else cout << "YES\n";
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