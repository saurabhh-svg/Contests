#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, sum = 0,even;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2==0) even++;
    }

    if (sum % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = INT_MAX,c=0;
    for (int i = 0; i < n; i++)
    {
            int x = a[i]; c=0;
            if(x&1) {
                while (x % 2 != 0)
                {
                    x = x / 2;
                    c++;
                }
            }else{
                while (x % 2 == 0)
                {
                    x = x / 2;
                    c++;
                }
            }
            
        ans = min(ans, c);
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