#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int helper(int a[], string s, int i)
{
    if (i == s.size() || s[i] == '0')
        return 0;

    if (i > 0 && s[i] == '1' && s[i - 1] == '1')
        return a[i] + helper(a, s, i + 1);
    else if (s[i] == '1' && s[i - 1] == '0')
        return max(helper(a, s, i + 1), (a[i] + helper(a, s, i + 1)));

    return 0;
}

void solve()
{
    int n, mn=0,sum=0;
    string s;
    cin >> n >> s;
    int a[n];
    fl(i, n){
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n;i++){
        if (s[i] == '0') {
                sum = sum - mn;
                mn = a[i];
            }else
                mn = min(mn, a[i]);
    }
    sum -= mn;
    cout << sum << endl;
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