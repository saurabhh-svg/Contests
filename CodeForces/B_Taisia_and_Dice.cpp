#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    int max = s - r;
    int countMax = s / (n - 1);
    cout << max << " ";
    int i = 1, rem = ((r / (n - i)) + (r % (n - i)));
    while (rem >= max) {  cout << rem << " ";
        rem = ((r / (n - i)) + (r % (n - i)));
        i++;
    }
    for (int j = 0; j < n - i; j++)
        cout << r / (n - i) << " ";

    cout << rem << "\n";
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
