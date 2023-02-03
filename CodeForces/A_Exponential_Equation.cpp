#include <bits/stdc++.h>
#define int long long int
using namespace std;
bitset<500001> Primes;

void solve(){
    int n;
    cin >> n;
    if (n & 1)  cout << -1 << endl;
    else cout << 1 << " " << n / 2 << endl;
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