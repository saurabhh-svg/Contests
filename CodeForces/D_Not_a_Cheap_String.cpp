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
    string s;
    int a,c=0;
    cin >> s>>a;
    vector<int> v(27, 0);
    map<int,int> umap;
    for (int j = 0; j < s.length(); j++)
    {
        c=c + (s[j] - 'a') + 1;
        v[s[j] - 'a' + 1]++;
    }
    int k = 26;
    while (c > a) {
        while (v[k] == 0)  k--;
        c -= k;
        v[k]--;
    }
    for (int j = 0; j < s.length(); j++){
        if (v[s[j] - 'a' + 1] > 0)   {
            cout << s[j];
            v[s[j] - 'a' + 1]--;
        }
    }
    cout << endl;
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