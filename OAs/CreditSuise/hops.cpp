#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    fl(i, n) cin >> a[i];
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int c = 1, j = i;
        while (a[j] - 1 != i)
        {
            j = a[j] - 1;
            c++;
        }
        ans.pb(c);
    }
    for (auto i : ans)
        cout << i << " ";

    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}