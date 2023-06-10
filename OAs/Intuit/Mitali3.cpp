#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int x, y, z, ans = 0;
    cin >> x >> y >> z;
    for (int i = 1; i <= sqrt(x); i++)  {
        if ((x % i) == 0)  {
            if (i == sqrt(x)) {
                if (i <= y && i <= z) ans++;
            } else {
                int o = x / i;
                if (i <= y && o <= z)  ans++;
                if (i <= z && o <= y) ans++;
            }
        }
    } cout << ans << endl;
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