#include <bits/stdc++.h>
#include <unordered_map>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define cn(arr, n)              \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define ct(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << ' ';  \
    cout << endl
using namespace std;

ll find(ll a,ll b){
    if(a==b)
        return 0;

    if((a|b)<=b )
        a = a | b;
    ll ans1 = find(a + 1, b);
    ll ans2 = find(a, b + 1);
    return 1 + min(ans1,ans2);
}

void solve(){
    ll a, b, ans = 0;
    cin >> a >> b;
    ans = find(a, b);
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}