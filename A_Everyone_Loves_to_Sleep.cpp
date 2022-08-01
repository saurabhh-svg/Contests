#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    int n; cin >> n;
    vector<int> v;
    int H, M;  cin >> H >> M;
    fl(i,n) {
        int h, m; cin >> h >> m;
        v.pb((60 * h) + m);
    }
    sort(v.begin(), v.end());
    int ans1 = (60 * H) + M;
    fl(i,n) {
        if (v[i] >= ans1) {
            int h = ans1 - v[i]; int hour = h / 60; int min = h % 60;
            cout << abs(hour) << " " << abs(min) << "\n";
            return;
        }
    }
        int ans2 = 24 * 60; int a = ans2 - ans1;
        int b = v[0] + a;  int hour = b / 60;  int min = b % 60;
        cout << abs(hour) << " " << abs(min) << "\n";
    
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