#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,z;
    vector<int> v;
    cin >> n;
    int a[51] = {0};
    fl(i, n)
    {
        cin >> z;
       while (z>n) z /= 2;
        v.pb(z);
    }
    sort(vr(v),greater<int>());

    fl(i,n){
       if(a[v[i]]==0)
           a[v[i]] = 1;
           else{
               while (v[i]>0)
               {
                   if(a[v[i]]==0){
                   a[v[i]] = 1;
                   break;
               }
               v[i] /= 2;
               }
               if(v[i]>0)
                   continue;
                   else{
                       cout << "NO" << endl;
                   return;
           }
           }
    }
    for (int i = 1; i <= n;i++)
        {
            if (a[i] == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    cout << "YES" << endl;
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }