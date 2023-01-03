#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, ans = 0, sum = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)  cin >> v[i];
    priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> pq1;
    for (int i = m; i < n; i++) {
        if (v[i] < 0)    pq.push(v[i]);
        sum += v[i];
        while (sum < 0) {
            int x = pq.top();   pq.pop();
            sum -= (2 * x); ans++;
        }
    } if (v[m - 1] <= 0)  sum = v[m - 1];
        else if (m != 1) {
            sum = -v[m - 1];  ans++;
        }

    for (int i = m - 2; i >= 1; i--) {
        if (v[i] > 0) pq1.push(v[i]);
        sum += v[i];
        while (sum > 0)  {
            int x = pq1.top();  pq1.pop();
            sum -= (2 * x); ans++;
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