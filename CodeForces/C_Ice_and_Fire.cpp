#include <bits/stdc++.h>
#define int long long int
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

void solve()
{
    int n, c = 1;
    cin >> n;
    string s;
    cin >> s;
    cout << 1 << " ";
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == s[i - 1]) {
            c++;
            cout << i + 2 - c << " ";
        }  else   {
            c = 1;
            cout << i + 1 << " ";
        }
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