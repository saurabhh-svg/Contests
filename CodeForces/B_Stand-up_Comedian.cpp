#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0, a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==0){
        cout << 1 << endl;
        return;
    }
    ans = a;
    int x
    ans += 2 * min(b, c);
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