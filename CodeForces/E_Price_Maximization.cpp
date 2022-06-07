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
    ll n, k, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    fl(i, n){
        cin >> v[i];
        ans += v[i] / k;
        v[i] = v[i] % k;
    }
    sortall(v);
    int i = 0, j = n - 1;
    while(i<j){
        if(v[i]+v[j]>=k){
            ans++;
        i++;
        j--;
    }else
        i++;
    }
    cout << ans << endl;
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