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

void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    fl(i, n) cin >> a[i];
    vector<int> ans(n + 1, INT_MIN);
    ans[0] = 0; // sum of subarray of length 0

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            ans[j - i + 1] = max(ans[j - i + 1], sum);
            // storing maximum sum of a subarray of a particular length
        }
    }

        for (int i = 0; i <= n; i++)
        {
            int ans1 = 0;
            for (int k = 0; k <= n; k++)
            {
                ans1 = max(ans1, (min(i,k) * x + ans[k]));
            }
            cout << ans1 << " ";
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