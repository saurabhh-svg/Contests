#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(int t)
{
    ll n,mx;
    cin >> n;
    map<int, int> umap;
    int s;
    int a[n];

    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
        for (int j = 0; j < n; j++)
        {
            umap[a[j]]++;
            int res = 1;
            int sum = 0;
            cout << "Case #" << t << ": ";
            for (auto it = umap.rbegin(); it != umap.rend(); it++)
            {
                sum = sum + (it->second);
                res = max(res, min(sum, it->first));
            }
            cout << res << " ";
        }
        cout << endl;

        cout << endl;
    }

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}