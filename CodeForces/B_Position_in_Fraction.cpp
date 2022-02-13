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

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    for (ll i = 1; i <= 1000000;i++)
    {
        a = a * 10; //a<b always -> first place is 0 always
        int div = a / b;
        if(div==c){
            cout << i << endl;
            return;
        }
        a = a % b;
    }
    cout << "-1" << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ solve();
    return 0;
}