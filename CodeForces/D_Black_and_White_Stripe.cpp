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
    ll n, k;
    cin >> n >> k;
    int ans = INT_MAX;
    vector<int> prefix(n + 1, 0);

    string s;
    cin >> s;
    bool flag = false;
    if (s[0] == 'W')
        prefix[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'W')
            prefix[i] = prefix[i - 1] + 1;
        else
            prefix[i] = prefix[i - 1];
    }

    ans = prefix[k - 1];
    for (int i = k; i < n; i++)
    {
        int white = prefix[i] - prefix[i - k];
        ans = min(ans, white);
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