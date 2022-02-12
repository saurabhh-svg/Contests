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
    ll n, k;
    cin >> n >> k;
    if (n == k)
    {
        fl(i, n)
        cout  << "1"   << " ";
        cout << endl;
        return;
    }
    if (k == (n * (n + 1)) / 2)
    {
        for (int i = 1; i <= n; i++)
        cout << i << " ";
        cout << endl;
        return;
    }
    if (k == (2 * n)-1)
    {
        fl(i, n / 2)
         cout << "1" << " ";
        for (int i = n / 2; i < n;i++)
            cout << "2" << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= n;i++){
    
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