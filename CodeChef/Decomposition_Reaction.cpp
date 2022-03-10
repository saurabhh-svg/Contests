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
ll mod = 1e9 + 7;
void solve()
{
    ll n, m, x1, x2, weight, ind;
    cin >> n >> m;
    ll quantity[n];
    vector<ll> w(n, 0), index(n, 0);
    fl(i, n) cin >> quantity[i];
    fl(i, 2 * m)
    {
        if (i % 2 == 0)
            cin >> x1 >> x2;
        else
        {
            fl(j, x2)
            {
                // cin >> w[i] >> index[i];
                cin >> weight >> ind;
                quantity[ind - 1] += ((weight % mod) * (quantity[x1 - 1] % mod)) % mod;
            }
            quantity[x1 - 1] = 0;
        }
        /*  for (int j = 0; j < x2;j++){
              quantity[index[j] - 1] += ((w[j] % mod) * (quantity[x1-1] % mod)) % mod;
          }
              quantity[x1 - 1] = 0; */
    }

    fl(i, n) cout << quantity[i] % mod << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
    solve();
    return 0;
}