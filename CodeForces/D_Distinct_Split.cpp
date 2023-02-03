#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    set<char> st, s2;
    vector<int> pref(n, 0), suff(n, 0);
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        pref[i] = st.size();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        s2.insert(s[i]);
        suff[i] = s2.size();
    }
    int ans = 0, i = 0, j = n - 1;
    for (int i = 0; i < n-1; i++)
        ans = max(ans, pref[i] + suff[i+1]);
    cout << ans << endl;
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