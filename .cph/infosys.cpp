#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
void solve()
{
    int  ans = 0;
    map<int, int> m;
    for (int i = 0; i < N; i++)
        m[A[i]]++;

    sort(A.begin(),A.end());
    if (A[0] == A[N - 1])
        return N;
    priority_queue<int> pq;
    for (auto i : m)
        pq.push(i.second);
    while (pq.size() > 1)
    {
        int x = pq.top(); pq.pop();
        int y = pq.top(); pq.pop();
        ans += y;
        x = x - y;
        if (x != 0)  pq.push(x);
    }
    if(pq.size()==1) ans += pq.top();
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}