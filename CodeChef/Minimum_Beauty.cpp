#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int sum, median = arr[1];
    sum = arr[0] + arr[1] + arr[2];
    int ans = abs(sum - 3 * median), j = 0;
    for (int i = 3; i < n; i++){
        sum -= arr[j++];
        sum += arr[i];
        ans = min(ans, 3 * (abs(sum / 3 - arr[j + 1])));
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