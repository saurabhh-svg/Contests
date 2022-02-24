#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    for (int i = 1; i < n; i = i + 3)
    {
        v[i - 1] = 2 * v[i];
        if (i + 1< n ) v[i + 1] = 2 * v[i];

        if (n % 3 == 1)
            v[n - 1] = 2;
    }

    fl(i, n) cout << v[i] << " ";
    cout << endl;
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