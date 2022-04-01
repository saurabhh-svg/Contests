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
    ll n, x, s = 0;
    cin >> n;
    fl(i, n)
    {
        cin >> x;
        s += x;
    }
    cout << s << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}