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
    ll a, b;
    cin >> a >> b;
    if (abs(b - a) < 2)
    {
        cout << "-1" << endl;
        return;
    }
    if (a % 2 == 0)
        cout << a << " " << a + 2 << endl;
    else
    {
        if (a % 3 == 0 && (b - a) >= 3)
            cout << a << " " << a + 3 << endl;
        else if ((b - a) >= 3)
            cout << a + 1 << " " << a + 3 << endl;
        else
            cout << "-1" << endl;
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