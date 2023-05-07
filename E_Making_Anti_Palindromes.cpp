#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0;
    string s;
    cin >> n >> s;
    if (n & 1){
        cout << -1 << endl;
        return;
    }

    vector<int> count(26, 0);
    priority_queue<int> pq;

    for (int i = 0; i < n / 2; i++){
        if (s[i] == s[n - i])
            count[s[i] - 'a']++;
    }
    
    for (auto &i : count) {
        if (i != 0)
            pq.push(i);
    }

    while (pq.size() > 1) {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        ans += y;
        x -= y;
        if (x > 0) pq.push(x);
    }

    if (pq.size() == 1) cout << -1 << endl;
    else cout << ans << endl;
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