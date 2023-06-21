#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, q, ans = -1, flag = false;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    vector<pair<int, int>> seg;

    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        seg.push_back({x, y});
    }

    cin >> q;
    vector<int> pref(n + 1, 0), query(q + 1);
    for (int i = 0; i < q; i++)  cin >> query[i];

    int lo = 0, hi = q;

    while (lo <= hi){
        flag = false;
        int mid = (lo + hi) / 2;
        vector<int> temp(n + 1, 0);

        for (int i = 0; i < mid; i++)
            temp[query[i]] = 1;

        for (int i = 1; i <= n; i++)
            temp[i] += temp[i - 1];

        for (int i = 0; i < m; i++){
            int r = seg[i].second, l = seg[i].first;
            int len = r - l + 1;
            int ones = temp[r] - temp[l - 1];
            if (ones > (len / 2)){
                flag = 1;
                break;
            }
        }
        if (flag) {
            ans = mid;
            hi = mid - 1;
        } else
            lo = mid + 1;
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
