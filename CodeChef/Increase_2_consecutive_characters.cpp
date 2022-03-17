#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n, q, l, r, f = 1;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<ll> left, right;
    fl(i, q)
    {
        cin >> l >> r;
        left.pb(l);
        right.pb(r);
    }
    int E[n];
    for (int i = 1; i <= n; i++)
    {
        ll c = (b[i - 1] - a[i - 1] + 26) % 26;
        E[i] = E[i - 1];
        if (i % 2 == 0)   E[i] += c;
        else  E[i] -= c;
    }
    for (int j = 0; j < q; j++)
    {
        ll sum = (E[right[j]] - E[left[j] - 1]) % 26;
        if (sum == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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
