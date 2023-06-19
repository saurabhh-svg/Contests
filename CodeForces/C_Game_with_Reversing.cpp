#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, count = 0, c = 0, ans;
    string a, b;
    cin >> n >> a >> b;
    string temp = b;
    reverse(temp.begin(), temp.end());
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i]) count++;
        if (a[i] != temp[i]) c++;
    }
    if(count==0) ans = 0;
    else if (c == 0) ans = 2;
    else ans = min(count * 2 - (count % 2), 2 * c - !(c % 2));
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