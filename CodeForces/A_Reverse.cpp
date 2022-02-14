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
    ll n, i = 0, j = 0, k = 0, index;
    cin >> n;
    vector<int> v(n), b(n);

    fl(i, n) cin >> v[i];
    fl(i, n)
    {
        if (v[i] == i + 1)
            continue;
        else
        {
            k = i;
            break;
        }
    }
    for (i = k; i < n; i++)
    {
        if (v[i] == k + 1)
        {
            j = i;
            break;
        }
    }
    for (i = 0; i < k; i++)
        cout << v[i] << " ";
    for (i = j; i >= k; i--)
        cout << v[i] << " ";
    for (i = j + 1; i < n; i++)
        cout << v[i] << " ";
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