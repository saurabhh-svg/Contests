#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
    {
        int n; cin >> n;
        if (n < 10) {
            if (n & 1) cout << n / 2 << " " << n / 2 + 1 << endl;
            else cout << n / 2 << " " << n / 2 << endl;
            return;
        }
        int first = 0, second = 0, flag = 1;

        while (n > 0) {
            int d = n % 10;
            if (d % 2 == 0)  {
                first = first * 10 + (d / 2);
                second = second * 10 + (d / 2);
            }
            else{
            if (flag)  {
                first = first * 10 + (d / 2);
                second = second * 10 + (d / 2) + 1;
                flag = 0;
            }
            else  {
                first = first * 10 + (d / 2) + 1;
                second = second * 10 + (d / 2);
                flag = 1;
            }
        }
        n /= 10;
    }
    string f = to_string(first),s = to_string(second);
    reverse(f.begin(), f.end());
    reverse(s.begin(), s.end());
    while (f[0] == '0') f.erase(0, 1);
    while (s[0] == '0') s.erase(0, 1);

    cout << f << " " << s << endl;
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