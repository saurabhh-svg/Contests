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
    int l;
    string s;
    cin >> l >> s;
    if (l == 2 && s[0] >= s[1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << s[0] << " ";
        for (int i = 1; i < l; i++)
            cout << s[i];
        cout << endl;
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