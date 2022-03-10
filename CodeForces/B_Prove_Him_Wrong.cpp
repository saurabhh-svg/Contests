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
    ll a[n];
    if (n > 19)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    a[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] * 3;
    }
    fl(i, n) cout << a[i] << " ";
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