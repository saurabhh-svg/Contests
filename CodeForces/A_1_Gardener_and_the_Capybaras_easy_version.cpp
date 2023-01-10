#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size(), ind = 0;
    for (int i = 0; i < n ; i++) {
        for (int j = i + 1; j < n; j++)   {
            string a = s.substr(0, i + 1);
            string b = s.substr(i + 1, j - i);
            string c = s.substr(j + 1, n - j);
            if ((b <= a && b <= c) || (b >= a && b >= c))     {
                cout << a << " " << b << " " << c << endl;
                return;
            }
        }
    }
    cout << ":" << endl;
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