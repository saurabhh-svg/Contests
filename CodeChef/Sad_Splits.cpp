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
    ll o = 0, e = 0, index = 0;
    string n;
    cin >> n;
    fl(i, n.length())
    {
        if (n[i] != '0')
        {
            index = i;
            break;
        }
    }
    if (n[n.length() - 1] % 2 == 0)
    {
        for (ll i = index; i < n.length() - 1; i++)
        {
            if ((n[i] - '0') % 2 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
    else
    {
    
    for (ll i = index; i < n.length() - 1; i++)
    {
        if ((n[i] - '0') % 2 == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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