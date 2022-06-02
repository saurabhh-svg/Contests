#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 1){
        if(k==0)
        cout << "No\n";
        else
            cout << "Yes\n";
        return;
    }
    if (n == 2 )
    {
        cout << "Yes\n";
        return;
    }
if(n%2==1 && k%2==0)
    cout << "No\n";
else
    cout << "Yes\n";

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