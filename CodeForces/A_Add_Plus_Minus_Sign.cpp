#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag;
    if (s[0] == '1')
        flag = true;
    else
        flag = false;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1' && flag == false)
        {
            cout << '+';
            flag = true;
        }
        else if (s[i] == '1' && flag == true)
        {
            cout << '-';
            flag = false;
        }
        else
            cout << '-';
    }
    cout << endl;
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