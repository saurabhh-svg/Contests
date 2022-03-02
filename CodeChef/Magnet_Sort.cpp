#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long int
using namespace std;

void solve()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    string s;  cin >> s;
    sort(a, a + n);
    ll st = 0, en = n - 1;
    unordered_map<char, int> u, u2, u3;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')  u['N']++;
        else u['S']++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) {
            st = i;
            break;
        }
    }
    for (long long j = n - 1; j >= 0; j--) {
        if (a[j] != b[j])   {
            en = j;
            break;
        }
    }
    for (ll j = 0; j <= st; j++) {
        if (s[j] == 'N')  u2['N']++;
        else   u2['S']++;
    }
    for (ll j = en; j < n; j++) {
        if (s[j] == 'N') u3['N']++;
        else  u3['S']++;
    }
    bool flag = true;
    for (long long j = n - 1; j >= 0; j--) {
        if (a[j] != b[j])  {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << 0 << endl;

        return;
    }
        if (s[st] != s[en])   cout << 1 << endl;
        else if ((u2['S'] > 0 && u3['N'] > 0) || (u3['S'] > 0 && u2['N'] > 0)) cout << 1 << endl;
        else if (u['S'] > 0 && u['N'] > 0)   cout << 2 << endl;
        else   cout << -1 << endl;
    }
    
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