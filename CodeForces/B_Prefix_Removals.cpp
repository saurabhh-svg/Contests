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
    string s;
    cin >> s;
    ll l = s.length(), index = 0;
    int a[27] = {0};
    fl(i, l) a[s[i] - 'a']++;
    ll i = 0;
    while (i < l)
    {
        if (a[s[i] - 'a'] > 1)
        {
            a[s[i] - 'a']--;
            i++;
        }
        else
            break;
    }
    for (ll j = i ; j < l; j++)
        cout << s[j];
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