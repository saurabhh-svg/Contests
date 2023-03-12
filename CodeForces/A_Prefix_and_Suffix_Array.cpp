#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < 2 * n - 2; i++) {
        string str; cin >> str;
        if (str.size() == n / 2)  s.push_back(str);
    }
    reverse(s[0].begin(), s[0].end());
    if (s[0] == s[1]) cout << "YES\n";
    else cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}