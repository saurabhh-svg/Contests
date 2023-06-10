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

void solve(int t)
{

    string s;
    cin >> s;
    int l = s.length();
    if (s[l - 1] == 'y' || s[l - 1] == 'Y')
    {
        cout << "Case #" << t << ": " << s << " is ruled by nobody." << endl;
        return;
    }
    if (s[l - 1] == 'a' || s[l - 1] == 'e' || s[l - 1] == 'i' || s[l - 1] == 'o' || s[l - 1] == 'u' || s[l - 1] == 'A' || s[l - 1] == 'E' || s[l - 1] == 'O' || s[l - 1] == 'U' || s[l - 1] == 'I')
        cout << "Case #" << t << ": " << s << " is ruled by Alice." << endl;
    else
        cout << "Case #" << t << ": " << s << " is ruled by Bob." << endl;
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