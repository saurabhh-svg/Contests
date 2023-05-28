#include <iostream>
#include <vector>
#define int long long int
using namespace std;

void solve()
{
    int x, k;
    cin >> x >> k;
    if(x%k!=0) {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }

    cout << 2 << endl;
    cout << x-k+1 << " " << k-1 << endl;
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