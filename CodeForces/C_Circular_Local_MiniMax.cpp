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
    ll n;cin >> n;
    vector<int> a(n);
    fl(i, n) cin >> a[i];
    sortall(a);
    int pos = (n + 1) / 2;
    int j = 0;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i += 2) ans[i] = a[j++];

    for (int i = 1; i < n; i += 2)  ans[i] = a[j++];

    

    bool possible = true;

    for (int i = 0; i < n; i++)
    {
        int b = ((i - 1) + n) % n;
        int f = (i + 1) % n;
        if ((ans[b] < ans[i] && ans[f] < ans[i]) || (ans[b] > ans[i] && ans[f] > ans[i]))
        {
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

   
        cout << "YES" << endl;

        for (auto i : ans)cout << i << " ";
        
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