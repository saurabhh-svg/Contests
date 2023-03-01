#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    string s, temp = "FBFFBFFBFB",ans="";
    cin >> n>>s;
    for (int i = 0; i < 1000;i++){
        if(i%3==0 && i%5==0)  ans += "FB";
        else if(i%3==0) ans += "F";
        else if(i%5==0) ans += "B";
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans.substr(i, n) == s)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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