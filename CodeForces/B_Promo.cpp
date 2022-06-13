#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n+1,0), p(n + 1, 0);
    v[0] = 0;
    for (int i = 1; i <= n; i++) cin >> v[i];
    sort(v.begin()+1, v.end(), greater<int>());
    for (int i = 1; i <= n; i++) p[i] = p[i - 1] + v[i];
    while (q--)
    {
        ll x, y, ans = 0;
        cin >> x >> y;
        ans = p[x] - p[x - y];
        cout << ans << endl;
    }
    return 0;
}

// 5 5  3 1 2