#include <bits/stdc++.h>
#include <unordered_map>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define cn(arr, n)              \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define ct(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << ' ';  \
    cout << endl
using namespace std;

void solve()
{
    vector<ll> v;
    ll l1, r1, l2, r2,left=0,right=0;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l2 > r1 || l1>r2)
    {
        cout << "-1" << endl;
        return;
    }
    cout << max(l2,l1) << " " << min(r1,r2) << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _

    solve();

    return 0;
}