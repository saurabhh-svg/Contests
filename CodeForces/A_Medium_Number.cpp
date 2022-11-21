#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[1] << endl;
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