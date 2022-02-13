#include <bits/stdc++.h>
#include <unordered_map>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define cn(arr, n)              \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define ct(arr, n)              \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << ' ';  \
    cout << endl
using namespace std;

bool isPalin(string s)
{
    string x = s;
    reverse(x.begin(), x.end());
    if (s == x)
        return true;
    return false;
}
void solve()
{
    ll n, ans = 0;
    string s;
    cin >> n;
    map<string, bool> mp2, mp1;
    // if l=1 then yes ->case1

    // if s1 and reverse of s1 is present(length 2) -> case2

    // for length 3 ->case3
    // if 3+2 "xyzyx" reverse of 1st 2 letters is present
    fl(i, n)
    {
        cin >> s;
        if (ans > 0)
            continue;
        // case 1
        int l = s.length();
        // case2
        string x = s;
        reverse(vr(x));
        mp1[s] = true; // marking string s in map1
        // case 3
        string y = s;
        y.pop_back();  // deleting last index and checking if reverse exist
        mp2[y] = true; // marking string y in map2

        string z = x;
        z.pop_back();

        if (l == 1 || s == x || mp1[x] || mp1[z] || mp2[x])
            ans++;
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}