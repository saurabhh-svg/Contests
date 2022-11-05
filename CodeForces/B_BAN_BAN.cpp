#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int j = 3 * n, ans = 0;
    if (n % 2 == 0)    cout << n / 2 << endl;
    else    cout << (n / 2) + 1 << endl;

    for (int i = 1; i <= 3 * n; i = i + 3){
        if (i % 3 == 0)     continue;
        if (j > i) {
            cout << i << " " << j << "\n";
            j = j - 3;
        }
        else return;
    }
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