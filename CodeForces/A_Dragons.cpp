#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll s, n, x, y,flag=0;
    cin >> s >> n;
    vector< pair <ll,ll> > sb;
    fl(i, n)
    {
        cin >> x >> y;
        sb.pb(make_pair(x, y));
    }
sort(sb.begin(), sb.end()); //sorting by 1st element strength of pair

fl(i,n){
    if(s>sb[i].first){
        s += sb[i].second;
       // cout << s << " ";
    }
    else
    {
        flag = 1;
        break;
    }
}
if(flag==1)
    cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main(){
    _ solve();
    return 0;
 }