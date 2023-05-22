#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ans = n;
    if (n & 1)
    {
        ans = n - 1;
        n--;
    }
    int i = 0;
    while (i < n)
    {
        if (v[i] == v[i + 1]){
            ans -= 2;
        } 
            i += 2;
    }
    if(ans==0)
        ans++;
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