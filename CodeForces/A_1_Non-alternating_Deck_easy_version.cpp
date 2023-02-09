#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, alice = 0, i = 0, bob = 0, flag = 0;
    cin >> n;
    while (n > 0)
    {
        int val = min(i + 1, n);
        n -= val;
        if (i % 4 == 0 || i % 4 == 3)   alice += val;
        else bob += val;
        i = val;
    }
    cout << alice << " " << bob << endl;
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

/*
1+4+5+8+9+12+13
2+3+6+7+10+11


*/