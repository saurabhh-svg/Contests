#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0, m, mn;
    cin >> n;
    vector<pair<int, int>> temp, temp2;
    for (int i = 0; i < n; i++) {
        int x,m;
        cin >> m;
        vector<int> v;
        for (int j = 0; j < m; j++) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        temp.push_back({v[0], i});
        temp2.push_back({v[1], i});
    }
    sort(temp.begin(), temp.end());
    sort(temp2.begin(), temp2.end());
    ans += temp[0].first;
    for (int i = 1; i < temp2.size(); i++){
        ans += temp2[i].first;
    }

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