#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int skills, b;
    cin >> skills >> b;
    int r, h;
    cin >> r;
    vector<int> req(r);
    for (int i = 0; i < r; i++)
        cin >> req[i];
    cin >> h;
    vector<int> have(h);
    for (int i = 0; i < h; i++)
        cin >> have[i];
    vector<int> books(b);
    for (int i = 0; i < b; i++)
        cin >> books[i];
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