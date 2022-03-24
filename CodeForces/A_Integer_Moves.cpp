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
    double x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }
    int d = sqrt((x * x) + (y * y));
    if ((x*x + y*y)==d*d)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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