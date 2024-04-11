#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, mul = 1;
    string s;

    cin >> n >> m;
    vector<int> v(n), ans;

    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> s;

    int hi = n - 1, lo = 0;

    for (int i = 0; i < n - 1; i++)  s[i] == 'L' ? lo++ : hi--;

    ans.push_back(v[lo] % m);

    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == 'L')  ans.push_back(ans.back() * v[--lo] % m);
        else ans.push_back(ans.back() * v[++hi] % m);
    }

    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";  cout << endl;
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