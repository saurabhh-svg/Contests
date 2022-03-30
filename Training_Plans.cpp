#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
    double sum = 0;
    double avg = 0;
    ll n;
    cin >> n;
    map<ll, ll> mp;
    vector<ll> a(n), b(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (mp.count(b[i]))
            mp[b[i]] = max(mp[b[i]], a[i]);
        else
            mp[b[i]] = a[i];
    }
    ll i = 0;
    while (mp.count(i))
    {
        sum += double(mp[i]);
        i++;
        avg = max(avg, double(sum) / double(i));
    }
    if (avg < 0)
        cout << double(0) << endl;
    else
        cout<<fixed <<setprecision(20)<<avg << endl;
}

//===========MAIN BEGIN===========

int main()
{
    ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}