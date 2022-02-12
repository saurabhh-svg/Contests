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
    ll n, x, flag = 1;
    cin >> n;
    int v[n], vs[n], vtemp[n];
    fl(i, n) cin >> v[i];
    fl(i, n) vtemp[i] = vs[i] = v[i];
    sort(vs, vs + n);
    for (int i = 0; i < n - 1; i++)
    {
        flag = 1;
        fl(j, n) v[j] = vtemp[j];
        sort(v, v + i + 1);
        sort(v + i + 1, v + n);
        fl(j, n)
        {
            if (v[j] != vs[j])
                flag = 0;
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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