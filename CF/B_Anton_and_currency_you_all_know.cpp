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
    string n;
    cin >> n;
    int l = n.length(),index=0,e,flag=0;
    int o = n[l - 1] - '0';
    fl(i, l)
    {
        e = (n[i] - '0');
        if (e% 2 == 0 && e<o){
            swap(n[i], n[l - 1]);
    cout << n << endl;
    return;
        }
    }
    for (int i = l - 2; i >= 0;i--)
    {
        e = (n[i] - '0');
        if (e% 2 == 0 && e>o){
            swap(n[i], n[l - 1]);
    cout << n << endl;
    return;
        }
    }

    cout << "-1" << endl;
        return;
}

//*****************************************************************
//----------------------------main begins---------------------------
//******************************************************************

int main(){
    _ solve();
    return 0;
 }