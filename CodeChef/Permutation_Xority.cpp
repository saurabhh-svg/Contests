#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    ll n,m;
    cin >> n;
    m = n;
    if(n==2){
        cout << -1 << endl;
        return;
    }

    if(n%2==1){
    for (ll i = n; i >= 1;i--)  cout << i  << " ";
    cout << endl;
    }
    else{
        for (ll i = n; i > 4; i--)
            cout << i << " ";
        cout << "4 1 3 2 " ;
        
        cout << endl;
}
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