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
    ll n, low = 0, sum = 0;
    cin >> n;
    pair<int, int> a[n];
    vector<int> v;
    fl(i, n)
    {
        cin >> a[i].first;   // tokens
        a[i].second = i + 1; // indexes
    }
    sort(a, a + n); // sorting tokens to apply binary searach

    sum = a[0].first;
    for (int i = 1; i < n;i++){
        if(sum<a[i].first) low = i;
        sum += a[i].first;
    }
        for (int i = low; i < n; i++)  v.pb(a[i].second);
    sortall(v);
    cout << v.size() << endl;
    fl(i, v.size()) cout << v[i] << " ";
    cout << endl;
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