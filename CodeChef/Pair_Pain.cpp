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
    ll n, ans = 0, x, o = 0,t=0;
    cin >> n;
    fl(i, n)  {
        cin >> x;
        if (x == 1)  o++;
        if(x==2) t++;
    }
    if (o > 0){
        for (ll i = 1; i <= o;i++)  ans += n - i;
    }
    if(t>1){
        for (ll i = 1; i < t;i++) ans += i;
    }
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