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
    ll a[4] = {1, 3, 2, 4};
    ll temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp > 3)
            temp = 0;
        cout << a[temp] << " ";
        temp++;
        if (temp == 1)
            a[temp] += 2;
        if (temp > 1)
            a[temp] += a[temp];
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