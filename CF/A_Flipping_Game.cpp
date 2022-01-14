#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,z,ans=0,count=0;
    cin >> n;
    vector<int> v, a;
    fl(i,n){
        cin >> z;
        v.pb(z);
    }
    a = v;
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        for (int k = i; k <= j;k++){
            a[k] = 1 - a[k];
        }
        if(j==n-1) j = 0;
            for (int p = 0; p < n; p++)
        {
           if(a[p]==1) count++;
        }
        cout << i << " " << count << endl;
        ans = max(ans, count);
        count = 0;
        a = v;
        i++;
    }
    cout << ans << endl;
}

int main(){ _

solve();

return 0;
 }