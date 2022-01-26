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
    ll n;
    cin >> n;
    //Every number greater than 1099 cam be written as sum of 11 and 111
    //chicken Mcnugget theorem
    if(n>1099){
        cout << "YES" << endl;
    return ;
}
    // n=a111+b11
    for (int i = 0; i < 100 ; i++) {
            for (int j = 0; j < 100; j++)   {
                if (i * 111 + j * 11 == n)    {
                    cout << "YES" << endl;
                    return ;
                }
            }
    }
    cout << "NO" << endl;
    
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