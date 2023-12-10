#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string n;
    cin >> n;
    int ans = 0, prev = 1;

    for (int i = 0; i < 4; i++)
    {
        int c = n[i] - '0';
        if(c==0) c += 10;
        int diff = abs(c - prev);
        if (diff < 0) diff = 10 - diff;
        ans += diff + 1;
        prev = c;
    }
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