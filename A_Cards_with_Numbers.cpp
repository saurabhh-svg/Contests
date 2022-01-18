#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    int a[50001] = {0};
    int b[50001] = {0};
    ll n, z, mx = 0, i1 = 0;
    vector< pair <ll,ll> > v;
    cin >> n;
    for (int i = 1; i <= 2 * n;i++)
    {
        cin >> z;
        if(a[z]==0){
            b[z] = i;
            a[z] = 1;
        }
        else
        {
            v.pb(make_pair(b[z],i));
            a[z] = 0;
        }
       // mx = max(mx, z);
    }
    for (int i = 1; i <= 50001;i++){
        if(a[i]>=1){
            cout << "-1" << endl;
            return;
        }
    }
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
        }
}

int main(){ _
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
        solve();

return 0;
 }