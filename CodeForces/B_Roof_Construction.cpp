#include <bits/stdc++.h>
#include <unordered_map>
#define _  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

using namespace std;

void solve()
{
    ll n, s = 1, p = 1;
    cin >> n;
    while (n > p*2)  p = p* 2;

    for (int i = n - 1; i >= p;i--)
        cout << i << " ";
    for (int i = 0; i < p;i++)
        cout << i << " ";
    cout << endl;
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