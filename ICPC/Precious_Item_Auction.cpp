#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int N, K, mx = 0, mn = 0;
    cin >> N >> K;

    vector<int> bids(N);
    for (int i = 0; i < N; ++i)
        cin >> bids[i];

    sort(bids.rbegin(), bids.rend()); // Sort in descending order

    for (int i = 1; i < K + 1; i++)
    {
        mx += bids[i];
    }

    // 3 3 2 2 1 1 

    for (int i = N; i > N-K-1; i--)
    {
        mn += bids[i];
    }

    cout << mn << " " << mx << endl;
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