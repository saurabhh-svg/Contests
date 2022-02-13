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
    ll n,l,len=9999,index=-1,ans=0,flag=0;
    cin >> n;
    string s;
    vector<string> v;
    vector<ll> length;
    fl(i, n)
    {
        cin >> s;
        l = s.length();
        len = min(l, len);
        v.pb(s);
        length.pb(l);
    }

    for (int i = 0; i < len;i++){
        for (int j = 0; j < n-1;j++){
        
            if (v[j][i] != v[j + 1][i])
            {
                index = i;
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(index==0){
        cout << "-1" << endl;
        return;
    }
if(index==-1){
    for (int i = 0; i < n;i++){
        ans = ans + length[i] - len;
    }
}
else {
 for (int i = 0; i < n;i++){
        ans = ans + length[i] - index;
    }
}
 cout << ans << endl;
}


//===========MAIN BEGIN===========

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }