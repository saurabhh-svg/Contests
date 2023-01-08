#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    int a[n];
    vector<int> p(n, 0), q(n, 0), rp(n, 1), rq(n, 1);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n;i++){
        int k = v[i].second;
        
    }

        cout << "YES\n";
    for (auto i : p)
        cout << i << " ";
    cout << endl;
    for (auto i : q)
        cout << i << " ";
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