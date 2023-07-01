#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<string> v(n);
    map<string, int> count;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        count[v[i]]++;
    }

    if(count.find("AB")!=count.end())
        ans += count["AB"];

    int x = 0, y = 0;
    if (count.find("A") != count.end())
        x= count["A"];
    if (count.find("B") != count.end())
        y= count["B"];

    ans += max(x, y);

    if (count.find("O") != count.end())
        ans += count["O"];

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