#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string a = "", b = "";
    a = s[0];
    int i = 1,n=s.size();
    while (i<n && s[i] == '0')  a += s[i++];
    if(i>=n){
        cout << "-1" << endl;
        return;
    }
        
    while (i < n) b += s[i++];
   if (stoll(a)<stoll(b))
        cout << a << " " << b << endl;
    else
        cout << "-1" << endl;
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