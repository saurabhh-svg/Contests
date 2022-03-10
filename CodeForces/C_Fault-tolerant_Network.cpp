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

ll findmin(vector<ll> &a,ll v){
    ll ans = INT_MAX;
    for (int i = 0; i < a.size();i++){
        ans = min(ans, abs(a[i] - v));
    }
    return ans;
}

void solve()
{
    ll n, ans = 0, two=0,three=INT_MAX,four=0;
    cin >> n;
    vector<ll> a(n), b(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
//for 4
    four = findmin(b, a[0]) + findmin(b, a[n - 1]) + findmin(a, b[0]) + findmin(a, b[n - 1]);
// for 2
    two = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]), abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]));
    //for 3
    three = min(three, (abs(a[0]-b[0])+findmin(b,a[n-1])+findmin(a,b[n-1])));
    three = min(three, (abs(a[n-1] - b[n-1]) + findmin(b, a[0]) + findmin(a, b[0])));
    three = min(three, (abs(a[n-1] - b[0]) + findmin(b, a[0]) + findmin(a, b[n - 1])));
    three = min(three, (abs(a[0] - b[n-1]) + findmin(b, a[n - 1]) + findmin(a, b[0])));

    ans = min(two, min(three, four));
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