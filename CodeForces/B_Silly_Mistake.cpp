#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n, ans = 0, sum = 0, ksum = 0, emp;
    cin >> n;
    unordered_map<ll, ll> mp;
    vector<int> v(n), result;
    fl(i, n) cin >> v[i];
    fl(i, n)
    {
        emp = abs(v[i]);
        if (v[i] > 0)
        {
            if (mp[emp] != 0)
            {
                cout << "-1" << endl;
                return;
            }
            mp[emp] = 1;
            sum += v[i];
        }

        else
        {
            if (mp[emp] != 1)
            {
                cout << "-1" << endl;
                return;
            }
            mp[emp] = 2;
            sum += v[i];
        }

        if (sum == 0)
        {
            int push = i + 1 - ksum;
            result.pb(push);
            ksum += push;
            for (int j = i; j <= i+push; j++)
            {
                emp = abs(v[i]);
                mp[emp] = 0;
                mp.clear();
            }
        }
    }
    if (sum != 0)
        cout << "-1" << endl;
    else
    {
        cout << result.size() << endl;
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << endl;
    }
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}