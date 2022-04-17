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
    ll x, y;  cin >> x >> y;
    if ((x % 2 == 1 && y % 2 == 1 )||  x==1 || y==1)
    {
        cout << "-1" << endl;
        return;
    }
    if (x % 2 == 1 && y % 2 == 0)
    {

        fl(i, y / 2) cout << "b";
        fl(i, x) cout << "a";
        fl(i, y / 2) cout << "b";
        cout << endl;

        fl(i, x / 2) cout << "a";
        fl(i, y / 2) cout << "b";
        cout << "a";
        fl(i, y / 2) cout << "b";
        fl(i, x / 2) cout << "a";
        cout << endl;
    }
    else if (y % 2 == 1 && x % 2 == 0)
    {
        fl(i, x / 2) cout << "a";
        fl(i, y) cout << "b";
        fl(i, x / 2) cout << "a";
        cout << endl;

        fl(i, y / 2) cout << "b";
        fl(i, x / 2) cout << "a";
        cout << "b";
        fl(i, x / 2) cout << "a";
        fl(i, y / 2) cout << "b";
        cout << endl;
    }
    else 
    {
        fl(i, x / 2) cout << "a";
        fl(i, y) cout << "b";
        fl(i, x / 2) cout << "a";
        cout << endl;

        fl(i, y / 2) cout << "b";
        fl(i, x) cout << "a";
        fl(i, y / 2) cout << "b";
        cout << endl;
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