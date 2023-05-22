#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    int c = 0;
    for (auto i : s)
        v[i - 'a']++;
    for(auto i:v){
        if(i>=2)
            c++;
            if(c>=2){
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