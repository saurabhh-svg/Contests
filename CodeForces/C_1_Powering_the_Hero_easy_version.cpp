#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0)  pq.push(v[i]);
        else  {
            if(!pq.empty()){
                ans += pq.top();
                pq.pop();
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