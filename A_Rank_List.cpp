#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve(){
    ll n, k,z,p,ans=0;
    cin >> n >> k;
    vector<pair<int, int> > vp;
    vector<vector <pair<int,int> > > vvp;
    int a[55]={0};
    fl(i, n)
    {
        cin >> z >> p;
       // a[z]++;
        vp.pb(make_pair(z, p));
    }
    z = vp[k-1].first;
    p = vp[k-1].second;
    sort(vp.begin(), vp.end());

    for (int i = 0; i < n-1;i++){
       if(vp[i].first==vp[i+1].first){
           vvp.pb(make_pair(vp[i + 1].first, vp[i + 1].second);
       }
    }
    for (int i = 0; i < n;i++){
       if(vp[i].first==z &&  p == vp[i].second)
            ans++;
       }
 
    cout << ans << endl;
}
int main(){
    _ solve();
    return 0;
 }