#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int t)
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    cout << "Case " << t << ": ";
    
    map<char, int> mp1, mp2;
    for (int i = 0; i < a.size(); i++)
        mp1[a[i]] = i;

    for (int i = 0; i < a.size(); i++)
        mp2[b[i]] = i;

    
    cout << "YES\n";
    cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
}