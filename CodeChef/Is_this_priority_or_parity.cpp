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


//===========MAIN BEGIN===========

void sol(){
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        if (n % 2 == 0)
            cout << "EVEN" << endl;
        else
            cout << "ODD" << endl;
    }
    else if (k == 2)
        cout << "ODD" << endl;
    else
        cout << "EVEN" << endl;
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    ll mod = 1e9;
    while (test--)
    {

        sol();
    }

    return 0;
}