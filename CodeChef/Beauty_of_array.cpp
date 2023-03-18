#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    stack<int> s;

    int result = INT_MIN, cur;

    for (int i = 0; i < n; ++i)  {
        while (!s.empty() && s.top() >= v[i]) {

            int tmp = s.top();
            s.pop();
            result = max(result, tmp ^ v[i]);
        }
        if (!s.empty())  result = max(result, v[i] ^ s.top());
        s.push(v[i]);
    }
    cout << result << endl;
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