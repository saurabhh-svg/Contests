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
ll fa[15];
ll find(ll n, ll p)
{
    if (n == 0)
        return 0;
    if (p == 0)
        return __builtin_popcountll(n);
    if (fa[p] > n)
        return find(n, p - 1);
    else
        return min(find(n - fa[p], p - 1) + 1, find(n, p - 1));
}

void solve(){
    ll n,ans=INT16_MAX; cin >> n;
    
    fa[0] = 1;
    for (int i = 1; i < 15; i++)
        fa[i] = fa[i - 1] * (i+1);
    ans = find(n, 14);
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }