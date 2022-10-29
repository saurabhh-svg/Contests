#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<char> s(n);
    string ans = "";
    for (int i = 0; i < n; i++)    cin >> s[i];

    for (int i = 0; i < n; i++)   {
        if (s[i] == '*') {
            ans += 'J';
            while (s[i] == '*' && i<n-1)  i++;
        }  else if(s[i]=='_')  ans += 'W';
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}