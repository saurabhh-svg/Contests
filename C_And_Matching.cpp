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
    ll n, k;
    cin >> n >> k;
    // all 0 + k
   // cout << k << " " << n - 1 << endl; //And equal to K
    //rest all 0's
    int p = 0;
    vector<int> a(n/2), b(n/2);
    fl(i,n/2) a[i] = i;
    for (int i = n - 1; i >= n/2 ;i--) b[p++] = i;

    if (k == n - 1 && n==4){
        cout << "-1" << endl;
        return;
    }
    if(k<n-1){
        if (k < n / 2) swap(a[0], a[k]);
        else{
            reverse(b.begin(),b.end());
            swap(a[0], b[k-n/2]);
            reverse(b.begin(), b.end());
        }
       
    }
    //if k=n-1 we make 2 swaps to make it n-2
    // and then 1 swap to make it 1 
    //total n-2+1=n-1
     else if(k==n-1){
         swap(b[1], a[0]); // to make n-2 ->pair n-2 and n-1
         swap(a[1], a[(n / 2) - 2]); // to make 1 ->pair n/2+1 and 1
     }

    fl(i, n / 2)
            cout<< a[i] << " " << b[i] << endl;
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