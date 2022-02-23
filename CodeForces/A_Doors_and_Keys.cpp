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
    ll l = s.length(), red = 0, blue = 0, green = 0;
    fl(i, l)
    {
        if (s[i] == 'r')
            red = 1;
        if (s[i] == 'b')
            blue = 1;
        if (s[i] == 'g')
            green = 1;
        if ((s[i] == 'R' && red == 0) || (s[i] == 'G' && green == 0) || (s[i] == 'B' && blue == 0))
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
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