#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    string s;
    cin >> s;
    string pi = "3141592653589793238462643383279";
    int i = 0, j = 0, ans = 0;
    while (s[i] == pi[j]) {
        i++;
        j++;
    }

    cout << j << endl;
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