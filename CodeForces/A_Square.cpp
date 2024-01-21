#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    vector<pair<int, int>> a(4);
    int ans = 0;
    for (int i = 0; i < 4; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    // for(auto i:a) cout<<i.first<<" "<<i.second<<endl;
    // if (a[0].first == a[1].first)
    //     ans = (a[0].second - a[1].second) * (a[2].first - a[3].first);
    // else
    //     ans = (a[0].first - a[1].first) * (a[2].second - a[3].second);

    ans = abs(a[2].first - a[0].first) * abs(a[1].second - a[0].second);

    cout<< ans << endl;
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