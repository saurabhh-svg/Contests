#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int k, q, ans;
    cin >> k >> q;
    vector<int> a(k), n(q);
    for (int i = 0; i < k; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
        cin >> n[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < q; i++)
    {
        int lastInd = n[i], ans = n[i];

        while (true)
        {
            for (int j = 0; j < k; j++)
            {
                if (a[j] < lastInd)
                    break;
            }
            ans -= k;
            lastInd -= k;
        }

        cout << ans << " ";
    }
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