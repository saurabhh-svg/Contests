#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), a, b;

    for (int i = 0; i < n; i++)  cin >> v[i];

    sort(v.begin(), v.end());

       
     
        a.push_back(v[0]);
        int j = 1;
        while (j < n && v[0] == v[j])
            a.push_back(v[j++]);

        while (j<n) b.push_back(v[j++]);

        if (a.size() > 0 && b.size() > 0)  {
            cout << a.size() << " " << b.size() << endl;
            for (auto i : a)
                cout << i << " ";
            cout << endl;
            for (auto i : b)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
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