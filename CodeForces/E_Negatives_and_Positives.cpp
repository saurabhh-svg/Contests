#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n,negCount=0,mn=INT_MAX, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0) negCount++;
        sum += abs(v[i]);
        v[i] = abs(v[i]);
        mn = min(mn, v[i]);
    }

    if (!(negCount&1)) {
        cout << sum << endl;
        return;
    }
        cout << sum-(2*mn) << endl;
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