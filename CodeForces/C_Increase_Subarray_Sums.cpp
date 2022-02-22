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

int summ(int a[], int st, int end)
{
    int sum = 0;
    for (int j = st; j <= end; j++)
    {
        sum = sum + a[j];
    }
    return sum;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int j = 0; j < n; j++)
        cin >> a[j];
    unordered_map<int, int> umap;
    for (int j = 0; j <= n; j++)
        umap[j] = -1000000;
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int k = j; k < n; k++)
        {
            sum = sum + a[k];
            umap[k - j + 1] = max(sum, umap[k - j + 1]);
        }
    }
    // for(int j=0;j<=n;j++)cout<<umap[j]<<" ";
    umap[0] = 0;
    int prev = 0;
    for (int j = 0; j <= n; j++)
    {
        int maxi = -10000000;
        for (int k = j; k <= n; k++)
        {
            maxi = max(maxi, umap[k]);
        }

        if (maxi + (j * x) >= prev)
        {
            prev = maxi + (j * x);
        }
        cout << prev << " ";
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