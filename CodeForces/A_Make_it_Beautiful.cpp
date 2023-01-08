#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans(n);
    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }

    sort(v.begin(), v.end(), greater<int>());

   if(s.size()==1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << v[0] << " ";
    for (int i = n - 1; i > 0;i--)
        cout << v[i] << " ";
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