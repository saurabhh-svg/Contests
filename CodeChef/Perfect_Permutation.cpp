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
    if (k == n - 1)  {
            cout << n << " ";
            for (int i = 2; i < n; i++)
                cout << i << " ";
            cout << 1 << endl;
            return;
    }
    if(n==k){
        for (int i = 1; i <= k;i++)
            cout << i << " ";
        cout << endl;
        return;
    }

    for (int i = 1; i <= k; i++)
        cout << i << " ";
    for (int i = k + 2; i <= n; i++)
        cout << i << " ";
    cout << k + 1 << endl;
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