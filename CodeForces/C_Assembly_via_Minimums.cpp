#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, curr = 0;
    cin >> n;
    vector<int> v, ans;
    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[curr] << " ";
        curr += (n - i - 1);
    }
    cout << 1000000000 << endl;
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
