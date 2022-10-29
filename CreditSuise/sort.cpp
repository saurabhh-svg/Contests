#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)   cin >> v[i];
    int i = 1;
    while (i < n) {
        if (v[i] < v[i - 1]) {
            if (v[i] + v[i - 1] > m)     {
                cout << 0 << endl;
                return;
            }
            else   swap(v[i], v[i - 1]);
            i++;
        }
        else
            i++;
    }
    cout << 1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}