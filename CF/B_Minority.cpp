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
    ll o = 0, z = 0;
    string s;
    cin >> s;
    if(s=="01"||s=="10"){
        cout << "0" << endl;
        return;
    }
    ll l = s.length();
    fl(i,l){
        if(s[i]=='1')
            o++;
            else
                z++;
    }
if(o<z){
    cout << o << endl;
}else if(o>z){
    cout << z << endl;
} else{
    cout << z - 1 << endl;
}
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