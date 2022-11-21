#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n, m, k;
    cin >> n >> m;
    int arr[n][m], ans[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cin >> k;

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++)
        vp.push_back({arr[i][k], i});

    sort(vp.begin(), vp.end());
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = arr[vp[i].second][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    fun();
    return 0;
}