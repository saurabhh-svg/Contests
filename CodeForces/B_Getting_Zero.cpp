#include <bits/stdc++.h>
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
    ll n, ans, c = 0;
    cin >> n;
    vector<ll> v(n);
    fl(i, n)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            cout << 0 << " ";
            continue;
        }
        ans = 32768 - v[i];
        for (int j = v[i]; j <= v[i] + 15; j++)
        {
            c = j - v[i]; // counting no. of + operations
            ll temp = j, twopow = 0;
            while (temp % 2 == 0)
            { // counting no. of 2 ki pow present in the number
                temp /= 2;
                twopow++;
            }
            if (twopow < 15)
                c += (15 - twopow);
            ans = min(ans, c);
        }
        cout << ans << " ";
    }

    cout << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}