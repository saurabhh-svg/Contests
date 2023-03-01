#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int times = k;
    int st = 1, en = n,i=0;
    vector<int> ans;
    while (ans.size()<n) {
        if (times>0 && i==0)  {
            ans.push_back(st);
            times--;
            st++;
            i = 1;
        }
        if(times>0 && i==1){
            ans.push_back(en);
            times--;
            en--;
            i = 0;
        }
        if(times==0)   times = k;
    }
    for(auto i:ans)
        cout<<i<<" ";
    cout << endl;
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