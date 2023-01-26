#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> dish(n), table(m);
    for (int i = 0; i < n; i++)   cin >> dish[i];
    for (int i = 0; i < m; i++)   cin >> table[i];
    sort(table.begin(), table.end(), greater<int>());
    map<int, int> mp;
    for (int i = 0; i < n; i++)  mp[dish[i]]++;
    priority_queue<int> pq, pqt;
    for (auto i : mp)  pq.push(i.second);
    for (int i = 0; i < m; i++)
        pqt.push(table[i]);

    while (!pq.empty()){
        int d = pq.top(); pq.pop();
        int t = pqt.top();
        pqt.pop();
        if(d>=t){
            ans += t;
            d -= t;
            pq.push(d);
        }else{
            ans += d;
        }
        if(pqt.size()==0)
            break;
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