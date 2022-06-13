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
    ll n;
    cin >> n;
    vector<int>  ans(n + 1, 0);
    unordered_map<int, int> mp;
    ans[n] = n;
    for (int i = n - 1; i >= 1; i--) {
        if(ans[i+1]-i>0 && mp[ans[i+1]-i]==0)  ans[i] = ans[i + 1] - i;
       else ans[i] = (ans[i + 1]+ i);
       mp[ans[i]]++;
    }
    if(n%2==1)   ans[1] = n / 2 + 1;
    else  ans[1] = n / 2;
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
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