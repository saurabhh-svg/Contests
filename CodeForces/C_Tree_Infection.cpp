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
        int n;
        cin >> n;
        map<int, int> mp;
        n--;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans = mp.size() + 1;
        vector<int> v;
        int c = ans, maxa = 0;
        for (auto it : mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < v.size(); i++)
        {
            v[i] -= c;
            if (v[i] < 0)
                v[i] = 0;
            c--;
            maxa = max(maxa, v[i]);
        }
        int freq[maxa + 2] = {0};
        for (int i = 0; i < v.size(); i++)
        {
            freq[1]++;
            freq[v[i] + 1]--;
        }
        for (int i = 1; i < maxa + 2; i++)
            freq[i] += freq[i - 1];
        int l = 1, r = maxa + 1;
        while (freq[r] == 0)
            r--;

        while (l <= r)
        {
            if (l == r)
            {
                ans++;
                break;
            }
            ans++;
            freq[r]--;
            l++;
            if (freq[r] == 0)
                r--;
        }
        cout << ans << endl;
    }
    return 0;
}