#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isOk(vector<int> &v, int mid, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = i + 1;
        if (v[i] >= curr - mid)
            c++;
        else if (v[i] <= curr + mid)
            c++;
    }
    if (c > (n - (mid / 2 + mid % 2)))
        return false;
    return true;
}
void solve()
{
    int n = 0, left = 0, right = 0, ans;
    cin >> n;
    vector<int> v(n), pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pos[v[i]] = i;
    }
    if (n % 2 == 0)
    {
        left = n / 2;
        right = left + 1;
    }
    else
    {
        left = n / 2;
        right = left + 2;
    }
    ans = n / 2;
    while (left >= 1 && right <= n)
    {
        if (pos[left] > pos[left + 1])  break;
        if(pos[right]<pos[right-1])break;
        ans--;
        left--;
        right++;
    }

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