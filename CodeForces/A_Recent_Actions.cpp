#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, c = 1;
    cin >> n >> m;
    set<int> s;
    vector<int> v(m), ans(n, -1);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    for (int i = 0; i < m; i++){
        int len = s.size();
        s.insert(v[i]);
        if (len < s.size()) {
            ans[n-1] = i + 1;
            n--;
        }
        if(n<0)
            break;
    }
    for (auto i : ans) cout << i << " ";
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