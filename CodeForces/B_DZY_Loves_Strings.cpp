//*************************************************************
//-------------------Code By: Saurabh Singh-------------------
//*************************************************************

#include <bits/stdc++.h>
#include <unordered_map>
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
    string s;
    int k, a[26] = {0},l,ans=0;
    cin >> s >> k;
      l = s.length();
    for (int i = 0; i < 26;i++)
        cin >> a[i];

    fl(i,l){
       ans+= a[s[i] - 'a']*(i+1);
    }
    sort(a, a + 26, greater<int>());
    while(k--){
        ans+=(l+1)*(a[0]);
        l++;
    }
        cout << ans << endl;
}

//*****************************************************************
//----------------------------main begins---------------------------
//******************************************************************

int main(){
    _ solve();
    return 0;
 }