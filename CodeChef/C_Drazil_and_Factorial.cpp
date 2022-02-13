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
using namespace std;

// 2->2
// 3!->6->23
// 4!->2!2!3!
// 5!-> 5!
// 6!-> 5!3!
// 7-> 7
// 8->7222
// 9->7233
string a[10] = {"0", "1", "2", "3", "223", "5", "53", "7", "7222", "7323"};
void solve()
{
    int n;
    string s, ans = "";
    cin >> n >> s;
    fl(i, n)
    {
        if (s[i] != '0' && s[i] != '1')
            ans += a[s[i] - '0'];
    }
    sort(ans.begin(), ans.end(),greater<int>());
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ solve();
    return 0;
}