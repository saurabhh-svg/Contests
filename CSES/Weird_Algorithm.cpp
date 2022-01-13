#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n;
    cin >> n;
    cout<<n<<" ";
     while(n>1){
        if(n%2==1){
            n=n*3+1;
            cout<<n<<" ";
        }
            else{
            n=n/2;
            cout<<n<<" ";
        }
                
     }
}

int main(){ _
ll test;
// cin>>test;
// while(test--)
solve();
return 0;
 }