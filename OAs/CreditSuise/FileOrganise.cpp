#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int maxOdd = 0, ans = 0;
    unordered_map<char, int> m;

    for (auto i : s)   m[i]++;

    for (auto i : m) {
        if(i.second%2==1){
            maxOdd = max(maxOdd, i.second);
            ans += (i.second - 1);
        }
        else  ans += i.second;
    }
    if(maxOdd>0)  ans += 1;
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}