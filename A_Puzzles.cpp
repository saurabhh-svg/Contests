#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, m,z,mn=999999999,diff;
    cin >> n >> m;
    vector<int> v;
    fl(i, m)
    {
        cin >> z;
        v.pb(z);
    }
    sort(vr(v));
    
    cout << endl;
    for (int i = 0; i < m-n+1; i++)
    {
        diff = v[i + n - 1] - v[i];
        //cout << v[i + n - 1] << "-" << v[i] << "="<<diff << endl;
        mn = min(diff, mn);
        //cout << mn << endl;
    }
    cout << mn << endl;
}
int main(){ _

solve();

return 0;
 }