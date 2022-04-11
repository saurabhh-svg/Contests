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
    ll n;
    cin >> n;
    ll d = 1;
    ll c = 1;
    ll a = 0, b = 0;
    if (n % 4 == 0)
    {
        ll x = n / 4;
        cout << x << " " << x << " " << x << " " << x << endl;
        return;
    }
// if(n%4==3){
//     ll x = n / 4;
//     cout << x << " " << x << " " << x << " " << 1 << endl;
//     return;
// }
if(n%2==0){
    a = n / 2 - 2;
    b = n / 2;
    ll x = n / 4;
    cout << a << " " << b << " " << 1 << " " <<1 << endl;
    return;
}
if(n&1){
    a = n / 2;
    b = n / 2 - 1;
    ll x = n / 4;
    cout << a << " " << b << " " << 1 << " " << 1 << endl;
    return;
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