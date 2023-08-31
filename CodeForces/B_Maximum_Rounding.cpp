#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string x;
    cin >> x;
    int n = x.size() - 1, leadingZeros = 0;
    int last = INT_MAX;
    while (n >= 0)
    {
        if (x[n] >= '5') {
            if (n == 0) {
                x = '1' + x;
                n++;
            }
            else  x[n - 1]++;
            last = n;
        }
        n--;
    }
    for (int i = last; i < x.size();i++)
        x[i] = '0';
    while (leadingZeros < n && x[leadingZeros] == '0')
        leadingZeros++;
    x = x.substr(leadingZeros);
    cout << x << endl;
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