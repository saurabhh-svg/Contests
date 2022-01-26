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

void solve()
{
    double n, z, ans = 0, one = 0, two = 0, three = 0, four = 0;
    cin >> n;
    fl(i, n)
    {
        cin >> z;
        if (z == 1)
            one++;
        if (z == 2)
            two++;
        if (z == 3)
            three++;
        if (z == 4)
            four++;
    }
    ans += four;
    if (three <= one)
    {
        ans = ans + three;
        one = one - three;
        three = 0;
        if (2 * one >= two)
        {
            ans += two;
            one = one - 2 * two;
            two = 0;
            ans = ans + ceil(one / 4);
        }
        else
        {
            ans = ans + ceil(one / 2);
            two = two - ceil(one / 2);
            ans = ans + ceil(two / 2);
        }
    }
    else if (three > one)
    {
        ans = ans + one;
        three = three - one;
        one = 0;
        ans = ans + three + ceil(two / 2);
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ solve();
    return 0;
}