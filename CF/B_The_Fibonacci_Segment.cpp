//*************************************************************
//-------------------Code By: Saurabh Singh-------------------
//*************************************************************

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define cin(arr,n)        for(int i=0;i<n;i++)cin>>arr[i]
#define cout(arr,n)       for(int i=0;i<n;i++)cout<<arr[i]<<' '; cout<<endl
using namespace std;

void solve(){
    ll n,ans=0,len=2,v[1000000];
    cin >> n; cin(v, n);
    if (n == 1 || n == 2){
        cout << n << endl;
        return;
    }

    for(int i=2;i<n;i++){
        if (v[i] == (v[i-1] + v[i-2])) len++;
            else
                len = 2;
                    ans = max(ans, len); 
    }
            
    cout << ans << endl;
}

//*****************************************************************
//----------------------------main begins---------------------------
//******************************************************************

int main(){ _

solve();

return 0;
 }

 /* 
 for(int i=2;i<n;i++){
        cout << ans << endl;
        if (v[i] == (v[i - 1] + v[i - 2]))
            len++;
            else
                len = 2;
            ans = max(ans, len);
    }
 */