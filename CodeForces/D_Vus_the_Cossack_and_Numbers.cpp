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
    ll n;
    cin >> n;
    long double x, a = 0, b = 0, sum = 0;
    vector<ll> v, ans;
    vector<double> vd;
    fl(i, n){
        cin >> x;
        if (x > 0)   a += (ll)x;
        else  b += (ll)x;
        v.pb((ll)(x)); vd.pb(x);
    }
    int diff = a + b;
    //cout << diff << endl;
    if (diff > 0)
    {
        fl(i, n)  {
            if (vd[i] < 0 && diff > 0) {
                if (v[i] != vd[i])  {
                    v[i] = v[i] - 1;
                    diff--;
                }
            }
        }
    }
    else if (diff < 0)  {
        fl(i, n)   {
            if (vd[i] > 0 && diff < 0)    {
                if (v[i] != vd[i])   {
                    v[i] = v[i] + 1;
                    diff++;
                }
            }
        }
    }
    fl(i, n) cout << v[i] << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs

    solve();
    return 0;
}