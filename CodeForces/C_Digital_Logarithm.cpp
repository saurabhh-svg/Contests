#include <bits/stdc++.h>
#define int long long int
using namespace std;

int len(int x)
{
    int ans = 0;
    while (x)
    {
        ans++;
        x /= 10;
    }
    return ans;
}

void solve()
{
    int n, ans = 0, x;
    cin >> n;
    priority_queue<int> pa, pb;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pa.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pb.push(x);
    }
    while (!pa.empty() && !pb.empty())
    {
        int a = pa.top();
        pa.pop();
        int b = pb.top();
        pb.pop();
        if (a == b)
            continue;
        else
        {
            ans++;
            if (a > b)
            {
                pa.push(len(a));
                pb.push(b);
            }
            else
            {
                pa.push(a);
                pb.push(len(b));
            }
        }
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