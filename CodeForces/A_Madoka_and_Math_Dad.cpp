#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n, sum = 0;
    cin >> n;
    ll temp = n;
    if (n == 1 || n == 2)
    {
        cout << n << endl;
        return;
    }
    if (n % 3 == 1)
    {
        while (sum < n)
        {
            if (temp - sum > 2)
            {
                cout << 12;
                sum += 3;
            }
            else
            {
                cout << 1;
                sum += 1;
            }
        }
    }
    else
    {
        while (sum < n)
        {
            if (temp - sum > 2)
            {
                cout << 21;
                sum += 3;
            }
            else
            {
                cout << 2;
                sum += 2;
            }
        }
    }
    cout << endl;
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