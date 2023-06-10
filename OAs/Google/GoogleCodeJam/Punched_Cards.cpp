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

void solve(ll t)
{
    ll r, c;
    cin >> r >> c;
    cout << "Case #" << t << ":" << endl;
    for (ll i = 1; i <= (2 * r) + 1; i++)
    {
        for (ll j = 1; j <= (2 * c) + 1; j++)
        {
            if (i <= 2 && j <= 2)
                cout << ".";
            else if (i % 2 == 1 && j % 2 == 1)
                cout << "+";
            else if (i % 2 == 1 && j % 2 == 0)
                cout << "-";
            else if (i % 2 == 0 && j % 2 == 1)
                cout << "|";
            else  cout << ".";
        }
        cout << endl;
    }
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (ll t = 1; t <= test; t++)
        solve(t);
    return 0;
}