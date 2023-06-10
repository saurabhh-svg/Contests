#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, count = 0, ans = 0;
    cin >> n;
    map<int, bool> mp;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    priority_queue<pair<int,pair<int,int>>> pq_max;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pq.push({a, {b, i}});
        pq_max.push({b, {a, i}});
        mp[i] = false;
    }
    while(!pq_max.empty()){

        while (mp[pq_max.top().second.second] == true)
            pq_max.pop();

        int a = pq_max.top().first;
        int b = pq_max.top().second.first;
        int ind = pq_max.top().second.second;
        pq_max.pop();
        
        count++;
        mp[ind] = true;
        ans += b;

        int c = 0;
        while (pq.top().first <= count && !pq.empty())  {
            c++;
            int index = pq.top().second.second;
            mp[index] = true;
            pq.pop();
        }
        count -= c;
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