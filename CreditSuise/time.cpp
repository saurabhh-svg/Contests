#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;
void solve()
{
    int n, k = 0;
    cin >> n;
    vector<string> names(n);
    fl(i, n) cin >> names[i];
    vector<pair<int, int>> v, ans;
    set<int> s;

    fl(i, n)  {
        int x, y;
        cin >> x >> y;
        v.pb({x, y});
        s.insert(x);
        s.insert(y);
    }
    map<int, set<string>> m;
    for (auto i : v)
    {
        for (int j = i.first; j < i.second; j++)
            m[j].insert(names[k]);
        k++;
    }

    int x = *s.begin(), y = -1, f = -1;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        if (f == -1)
        {
            f = 1;
            continue;
        }
        if (y != -1)
            x = y;
        y = *i;
        ans.pb({x, y});
    }

    map<int, set<string>> an;
    int idx = 0;

    for (auto i : ans) {
        for (int j = i.first; j < i.second; j++)
            for (auto &p : m[j])
                an[idx].insert(p);

        idx++;
    }

    idx = 0;
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << " ";
        cout << an[idx].size() << " ";
        for (auto p = an[idx].begin(); p != an[idx].end();p++){
            if(p!=an[idx].begin())
                cout << " " << *p;
                else
                cout << *p;
        }
        idx++;
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}