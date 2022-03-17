#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n, w,sum=0;  cin >> n >> w;
    vector<pair<ll, ll> > v(n);
    vector<ll> ksp;
    fl(i, n) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
 sortall(v); bool flag = false;
    for (int i = n - 1; i >= 0; i--)  {
        if (sum + v[i].first <= w){
            sum += v[i].first;
            ksp.pb(v[i].second);
        }
       if (sum >= (w+1)/2) {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << ksp.size() << endl;
        fl(i, ksp.size()) cout<< ksp[i] << " ";
        cout << endl;
    }
   else
    cout << "-1"<<endl;
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