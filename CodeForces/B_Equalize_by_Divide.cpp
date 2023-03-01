#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n,one=0;
    cin >> n;
    vector<int> v(n);
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]==1)
            one = 1;
    }
    sort(v.begin(), v.end());
    if(v[0]==v[n-1]){
        cout<<0<<endl;
        return;
    }
    if(one)  {
        cout<<-1<<endl;
        return;
    }
//divide the smallest number by the largest number



    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i.first << " " << i.second << endl;
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