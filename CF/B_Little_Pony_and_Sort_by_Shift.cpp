#include <bits/stdc++.h>
#include<unordered_map>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cn(arr,n) for(int i=0;i<n;i++)cin>>arr[i]
#define ct(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;

void solve(){
    ll n,z,ind=0,c=0;
    vector<int> v,vs;
    cin >> n;
    fl(i, n)
    {
        cin >> z;
        v.pb(z);
    }
    vs = v;
    sort(vr(vs));
    if (v==vs) {
        cout << "0" << endl;
        return;
    }
    for (int i = 1; i < n;i++)
        {
            if (v[i] < v[i - 1])
            {
                c++;
                ind = i;
            }
            if (c > 1)
            {
                cout << "-1" << endl;
                return;
            }
        }
        if(v[0]<v[n-1])
            cout << "-1" << endl;
            else
        cout << n - ind << endl;
}

//===========MAIN BEGIN===========

int main(){
    _ solve();
    return 0;
 }