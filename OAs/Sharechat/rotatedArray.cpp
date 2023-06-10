#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int target;
    cin >> target;

    int lo = 0, hi = n - 1, mid;

    while (lo < hi){
        mid = (lo + hi) / 2;
        if (v[mid] > v[hi]) lo = mid+1;
        else hi = mid;
    }

    int timesRotated = lo;

    lo = 0, hi = n - 1;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        int realMid = (mid + timesRotated) % n;
        if (v[realMid] == target)
        {
            cout << realMid << endl;
            return;
        }
        else if (v[realMid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    cout << -1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}