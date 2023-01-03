#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        ll n, m;
        cin >> n >> m;
        vector<pair<ll, ll>> v;
        vector<ll> v1;
        vector<ll> v2;
        ll temp;
        ll tot = 0;
        for (ll j = 0; j < n; j++)
        {
            cin >> temp;

            if (j < m)
            {
                tot = tot + temp;
                v.push_back({temp, j});
            }
            v2.push_back(temp);
        }
        sort(v.begin(), v.end());
        ll count = 0;
        ll tott = 0;
        ll en = m - 1;
        // cout<<tot<<" ";
        for (ll j = 0; j < m; j++)
        {
            tott = tott + v2[j];
            while (tott < tot)
            {

                if (v[en].first > 0 && v[en].second > j)
                {
                    v[en].first = -v[en].first;
                    v2[v[en].second] = v[en].first;
                    tot = tot + (2 * v[en].first);
                    count++;
                }
                else if (v[en].first > 0 && v[en].second == j)
                {
                    v[en].first = -v[en].first;
                    v2[v[en].second] = v[en].first;
                    tot = tot + (2 * v[en].first);
                    tott = tott + (2 * v[en].first);
                    count++;
                }
                en--;
            }
        }
        //cout << count << " " << tot << " " << tott << " ";
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for (ll j = m; j < n; j++)
        {
            q.push(v2[j]);
            tott = tott + v2[j];
            while (tott < tot)
            {
                ll tempp = q.top();
                q.pop();
                tempp = -tempp;
                tott = tott + (2 * tempp);
                count++;
            }
        }

        cout << count << endl;
    }
    // your code goes here
    return 0;
}