#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool flag = false;
    string a = "", b = "";
    for (auto i : s)
    {
        if (i == '+')
            flag = true;
        else if (flag)
            b += i;
        else
            a += i;
    }
    // cout<<a<<" "<<b<<endl;
    int ans = stoi(a) + stoi(b);
    cout << ans << endl;
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