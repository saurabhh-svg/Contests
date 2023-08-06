#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, even = 0, odd = 0;
    cin >> n;
    vector<int> v(n), e, o, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)  o.push_back(v[i]);
        else  e.push_back(v[i]);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    for (int i = 0; i < n; i++) {
        if (v[i] & 1)   ans.push_back(o[odd++]);
        else  ans.push_back(e[even++]);
    }
    if (is_sorted(ans.begin(), ans.end()))  cout << "YES\n";
    else cout << "NO\n";
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