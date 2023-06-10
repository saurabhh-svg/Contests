#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define sortall(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<ll>())
using namespace std;

void solve(ll t){
    ll n,c=0;cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n;i++)  cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        if(v[i]>c)  c++;
    }
    cout << "Case #" << t << ": "; cout << c << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (ll t = 1; t <= test; t++)  solve(t);
    return 0;
}