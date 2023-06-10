#include <bits/stdc++.h>
#include <unordered_map>
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
    int lc, mfc, mtc;
    unordered_map<int, int> initial;
    cin >> lc;
    int l[lc];
    for (int i = 0; i < lc; i++)
    {
        cin >> l[i];
        initial[l[i]] = l[i];
    }
    cin >> mfc;
    int mf[mfc];
    for (int i = 0; i < mfc; i++)
    {
        cin >> mf[i];
    }
    cin >> mtc;
    int mt[mtc];
    for (int i = 0; i < mtc; i++)
    {
        cin >> mt[i];
    }
    for (auto i : initial)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    for (int i = 0; i < mfc; i++)
    {
       if(initial[mf[i]]) initial[mf[i]] = mt[i];
    }

    for (auto i : initial) {
        cout << i.first << " " << i.second << endl;
    }
    vector<int> ans;
    for (auto i : initial){
       if(i.second) ans.pb(i.second);
    }
    cout << endl;
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}