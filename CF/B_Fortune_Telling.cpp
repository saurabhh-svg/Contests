#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

// last bit 0 ->EVEN
// last bit 1 -> ODD
// sum and xor both invert the last bit
void solve()
{
    ll n, x, y, sum, t;
    cin >> n >> x >> y;
    sum = x;
    fl(i, n)
    {
        cin >> t;
        sum += t;
    }
    // sum -> if odd then last bit of ans obtained after (XOR or SUM) operations will also be odd

    if (sum % 2 == y % 2) // checking sum and y both are EVEN or ODD
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}