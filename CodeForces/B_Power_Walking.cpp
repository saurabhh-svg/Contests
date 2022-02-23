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
    set<int> a;
    fl(i, n)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    ll ans = a.size();
    for (int i = 1; i <= n; i++)
    {
        if (i <= ans)
            cout << ans << " ";
        else
            cout << i << " ";
    }
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