#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.end(),v.begin())
using namespace std;

void solve()
{
    ll n,t=0,th=0;
    cin >> n;
    vector<int> v(n);
    fl(i, n) {
        cin >> v[i];
        if (v[i] % 2 == 0)
            t++;
        if(c[i]%3==0)
            th++;
    }

    for (int i = 0; i < n; i++) {
        if(v[i]%2==0 && v[i+1]%2==1)  v[i + 1] = v[i + 1] * 2;
        if(v[i]%2==1 && v[i+1]%2==0)
            v[i + 1] = v[i + 1] * 2;
    }

    fl(i, n) cout << v[i] << " ";
    cout << endl;
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