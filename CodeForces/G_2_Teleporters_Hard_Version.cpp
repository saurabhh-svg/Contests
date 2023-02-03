#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, ans = 0, coins;
    cin >> n >> coins;
    int a[n], cost[n],revCost[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cost[i] = (a[i] + i + 1);
    }
    priority_queue<pair<int,int>> pq;
    for (int i = 0; i < n;i++)
        pq.push({cost[i], i});
    
    if(pq.top().first>coins) {
        cout << 0 << endl;
        return;
    }
    int prev = 0;
    while (coins > 0 && !pq.empty())
    {
        int currCost = pq.top().first;
        int currInd = pq.top().second;
        pq.pop();
        coins -= currCost;
        if(pq.top().first<=coins){
            
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