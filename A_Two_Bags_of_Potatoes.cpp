#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll y, k, n, ans = 0,rem=0,flag=0;
    cin >> y >> k >> n;
    rem = y % k;
    ans = k-rem;
    while(ans+y<=n){
        cout << ans << " ";
        ans += k;
        flag = 1;
    }
    if(flag==0)
        cout << "-1" << endl;
}
int main(){
    _ 
    solve();
    return 0;
 }