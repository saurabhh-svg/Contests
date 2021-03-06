#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--)
    {
        int n, s, temp = 0,sum=0;  cin >> n >> s;
        vector<ll> v(n);
        queue<int> q;
        fl(i, n)   cin >> v[i];
        
       fl(i,n) {
            sum+=v[i];
            q.push(v[i]);
            if (sum == s && q.size() >= temp)   temp = q.size();

            while (sum > s){
                sum -= q.front();
                q.pop();
            }
        }
        if (!temp)cout << -1 << endl;
        else cout << n - temp << endl;
    }
    return 0;
}