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
    ll n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2){
        cout << 1 << endl;
        return;
    }
  
        if (s[0] == '1') ans++;
        if (s[n - 2] == '0') ans++;

        for (int i = 0; i < n - 1; i++){
            if (s[i] == '0' and s[i + 1] == '1')
                ans++;
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