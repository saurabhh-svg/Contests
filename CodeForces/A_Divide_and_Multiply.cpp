#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

void solve()
{
    ll n, c = 0, s = 0;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    sortall(v);
    ll i = 0;
    while (i < n) {
       if(v[i]%2==0){
           c++;
           v[i] /= 2;
       }
       else
           i++;
    }
    sortall(v);
    v[n - 1] = v[n - 1] * pow(2, c);
    fl(i, n) s += v[i];

    cout << s << endl;
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