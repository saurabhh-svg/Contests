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
    ll n;
    cin >> n;
    ll a[n], countodd = 0, counteven = 0, toteven = 0, totodd = 0, ans = 0, c = 0;
    for (ll j = 0; j < n; j++){
        cin >> a[j];
    }
    if(n==3 && a[1]%2==1){
        cout << "-1" << endl;
        return;
    }

    for (ll j = 1; j < n - 1; j++)
    {
        if (a[j] % 2 == 0)  counteven++;
        else  countodd++;
    }
    for (ll j = 1; j < n - 1; j++)
    {
        if (a[j] % 2 == 0)
            ans += (a[j] / 2);
        if (a[j] % 2 == 1 && counteven > 0)
            ans += ((a[j] + 1) / 2);
    }
    if (ans == 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
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