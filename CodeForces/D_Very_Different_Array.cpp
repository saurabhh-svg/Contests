#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int i = 0, j = n-1,l=0,r=m-1;
    
    while(i<=j){
        if(abs(a[i]-b[l])>=abs(a[j]-b[r])){
            ans += abs(a[i] - b[l]);
            i++;
            l++;
        }else{
            ans += abs(a[j] - b[r]);
            r--;
            j--;
        }
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

// 1 2 4 6
// 7 5 3 3 2 1