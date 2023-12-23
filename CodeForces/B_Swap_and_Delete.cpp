#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s, ans = "";
    cin >> s;
    int zeroCount = count(s.begin(), s.end(), '0'), oneCount = count(s.begin(), s.end(), '1'), n = s.size();
    for (char &ch : s)
    {
        if (ch == '0' && oneCount < 1)
            break;
        if (ch == '1' && zeroCount < 1)
            break;
        if (ch == '0' && oneCount > 0)
            ans += '1', oneCount--;
        else if (ch == '1' && zeroCount > 0)
            ans += '0', zeroCount--;
    }
    cout << abs(n - (int)ans.length()) << endl;
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