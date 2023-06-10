#include <bits/stdc++.h>
#include <unordered_map>
#define int long long int
using namespace std;

void solve()
{
    int n, ans = 1;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)  cin >> b[i];
    unordered_map<int, int> mpA, mpB;
    int c = 1, i = 0;

    while (i < n - 1)  {
        if (a[i] == a[i + 1]) c++;
        else {
            mpA[a[i]] = max(mpA[a[i]], c);
            c = 1;
        } i++;
    }
    mpA[a[i]] = max(mpA[a[i]], c);
    i = 0, c = 1;
    while (i < n - 1) {
        if (b[i] == b[i + 1]) c++;
        else {
            mpB[b[i]] = max(mpB[b[i]], c);
            c = 1;
        } i++;
    }
    mpB[b[i]] = max(mpB[b[i]], c);

    for (auto i : mpA)  ans = max(ans, i.second + mpB[i.first]);

    for (auto i : mpB)  ans = max(ans, i.second + mpA[i.first]);

    cout << ans << endl;
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