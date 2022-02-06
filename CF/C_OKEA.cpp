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

void solve()
{
    ll n, k, c;
    cin >> n >> k;
    if ((n * k) % 2 == 0)
        c = (n * k) / 2;
    else
        c = ((n * k) / 2) + 1;
    if (k == 1)
    {
        cout << "YES" << endl;
        for (int j = 1; j <= n; j++)
        {
            cout << j << endl;
        }
        return;
    }
    else if ((n * k) % 2 == 0 && ((n * k) / 2) % k == 0)
    {
        cout << "YES" << endl;
        int stev = 2;
        int stodd = 1;
        for (int j = 0; j < n; j++)   {
            int stt = k - 1;
            while (stt >= 0 && stodd <= (n * k))
            {
                cout << stodd << " ";
                stodd = stodd + 2;
                stt--;
            }
            while (stt >= 0 && stev <= (n * k))
            {
                cout << stev << " ";
                stev = stev + 2;
                stt--;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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