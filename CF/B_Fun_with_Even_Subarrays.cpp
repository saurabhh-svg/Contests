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
    ll n, z, c = 0, count = 0, length = 00;
    cin >> n;
    vector<int> a;
    fl(i, n)
    {
        cin >> z;
        a.pb(z);
    };
    ll x = a[n - 1], j = n-1 ;
    while (j >= 0)
    {
        while (j >= 0 && a[j] == x)
        {
            length++;
            j--;
        }
        if (j < 0)
            break;
        count++;
        j = j - length;
        length *= 2;
    }
    cout << count << endl;
}
//===========MAIN BEGIN===========

int main()
{
    _
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}