#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m,ans=0;
    cin >> n >> m;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }
    ans = s.size();
    for (int i = 0; i < m; i++) {
        int ind, x;
        cin >> ind >> x;
        vector<int> temp(v);
        temp[ind] = x;
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(temp[i]);
        }
        ans+=
    }
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