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
    ll x;
    cin >> x;
    cout << __builtin_popcountll(x) << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
    solve();
    return 0;
}