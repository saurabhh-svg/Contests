#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }

    for (auto i : freq)
    {
        if (i.second & 1)
        {
            cout << "Marichka" << endl;
            return;
        }
    }
    cout << "Zenyk" << endl;
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