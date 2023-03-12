#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string t = "meow";
    int j = 0, i = 0;
    while (i < n)
    {
        if (s[i] != 'm' && s[i] != 'e' && s[i] != 'o' && s[i] != 'w')
        {
            cout << "NO" << endl;
            return;
        }
        if (s[i] != t[j])
        {
            cout << "NO" << endl;
            return;
        }
        while (s[i] == t[j])
            i++;
        j++;
        if (j == 4 && i != n)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (j == 4 && i == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}