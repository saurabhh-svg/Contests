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
    ll d, x = 0, y = 0;
    cin >> d;
    if (d % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << d << " " << d / 2 << endl;
    cout << d / 2 << " " << d << endl;
    cout << 0 << " " << d / 2 << endl;
    cout << d / 2 << " " << 0 << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}