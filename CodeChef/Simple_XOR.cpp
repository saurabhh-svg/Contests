#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;

    if (!(l & 1))
        cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << "\n";

    else
    {
        if (r - l > 3)
            cout << l + 1 << " " << l + 2 << " " << l + 3 << " " << l + 4 << " "
                 << "\n";

        else
        {
            int check = l ^ (l + 1);
            check ^= (l + 2);
            check ^= (l + 3);

            if (!check)
                cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << "\n";
            else
                cout << "-1\n";
        }
    }
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}