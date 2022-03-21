#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;
void solve()
{
    ll n, sum = 0, x, cnt = 0;
    cin >> n;
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        mp[x]++;
    }
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    priority_queue<ll> q;
    q.push(sum);
    while (!q.empty() && cnt < n)
    {
        ll temp = q.top();
        q.pop();
        cnt++;
        if (mp[temp / 2] > 0)
            mp[temp / 2]--;
        else
            q.push(temp / 2);
        if (mp[temp / 2 + temp % 2] > 0)
            mp[temp / 2 + temp % 2]--;
        else
            q.push(temp / 2 + temp % 2);
    }
    for (auto i : mp)
    {
        if (i.second > 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}