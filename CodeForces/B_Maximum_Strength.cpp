#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string l, r;
    cin >> l >> r;
    int n = r.size(),ans=0;
    while(l.size()<n) l = '0' + l;
    for (int i = 0; i <n;i++)
        if (l[i] != r[i]){
            ans = ((n - i - 1) * 9) + (r[i] - l[i]);
            break;
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