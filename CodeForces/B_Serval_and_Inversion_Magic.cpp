#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n - 1;
    while (s[i] == s[j] && i < j) {
        i++;
        j--;
    }
    if (i >= j) {
        cout << "Yes\n";
        return;
    }
    int count = 0;
    while (i <= j) {
        if (s[i] != s[j])   {
            i++;
            j--;
        }
        else  break;
    }
    if (i >= j) {
        cout << "Yes\n";
        return;
    }
    while (i <= j) {

        if (s[i] != s[j])     {
            cout << "No\n";
            return;
        }
        i++;  j--;
    }
    cout << "Yes\n";
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