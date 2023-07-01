#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, k, x;
    cin >> n >> k >> x;

    if (k == 1 && x == 1) {
        cout << "NO\n";
        return;
    }

    if (x != 1) {
        cout << "YES\n";
        cout << n << endl;
        for (int i = 1; i <= n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }

    if (x != 2 && (k < 3 && n % 2 == 1)){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    cout << n / 2 << endl;
    if (n % 2 == 1)
    {
       
        for (int i = 0; i < (n / 2) - 1; i++)
            cout << 2 << " ";
        cout << 3 << "\n";
    }
    else
    {
        for (int i = 0; i < (n / 2); i++)
            cout << 2 << " ";
        cout << endl;
    }

    // cout << "NO\n";
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