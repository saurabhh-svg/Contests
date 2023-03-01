#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string a, b, ans = "00";
    cin >> a >> b;
    int n = a.size(), m = b.size();
    unordered_map<string, int> mp;
    for (int i = 0; i < n - 1; i++){
        string temp=a.substr(i, 2);
        mp[temp]++;
    }  
    for (int i = 0; i < m - 1; i++) {
        string temp=b.substr(i, 2);
        if (mp[temp] > 0) {
            ans = temp;
            break;
        }
    }
    if (a[0] == b[0]) {
        cout << "YES\n";
        cout << a[0] << "*\n";
        return;
    } if (a[n - 1] == b[m - 1])
    {
        cout << "YES\n";
        cout << "*" << a[n - 1] << "\n";
        return;
    } if (ans != "00")  {
        cout << "YES\n";
        cout <<"*"<< ans <<"*"<< "\n";
        return;
    }

    cout << "NO\n";
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