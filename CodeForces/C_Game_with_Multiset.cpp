#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(vector<int> &freq)
{
    int t, x, bit = 0;
    cin >> t;
    if (t == 1)
        cin >> x, freq[x]++;
    else
    {
        cin >> x;
        vector<int> temp(freq);
        bool pos = true;
        while (bit < 30)
        {
            if ((x >> bit) & 1)
            {
                if (temp[bit])
                    temp[bit]--;
                else
                    pos = false;
            }
            temp[bit + 1] += temp[bit] / 2;
            bit++;
        }
        if (pos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> freq(32, 0);
    int test;
    cin >> test;
    while (test--)
        solve(freq);
}