#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(int t){
    string s, ans = "";
    ll n, sum = 0;
    cin >> s;
    fl(i, s.length())  sum += (s[i] - '0');
    cout << "Case #" << t << ": ";
    if (sum % 9 == 0){
        cout << s[0]<<'0';
        for(int i = 1; i < s.length();i++)  cout << s[i];
        cout << endl;
        return;
    }
    ll rem = sum % 9, flag = 0;
    rem = 9 - rem;
    fl(i, s.length()) {
        if ((rem < (s[i] - '0') && flag == 0))   {
            ans += rem + '0';
            ans += s[i];
            flag = 1;
        }
        else if ((i == s.length() - 1) && flag == 0){
            ans += s[i];
            ans += rem + '0';
            flag = 1;
        }
        else  ans += s[i];
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}