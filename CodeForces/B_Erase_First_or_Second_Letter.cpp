#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
     int n, curr = 0, ans = 0; string s;
    set<char> ss;
    cin >> n >> s;
    for (auto i : s) ss.insert(i), ans += ss.size();
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}
