//********************************************
//-----------Code By: Saurabh Singh-----------
//********************************************

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
    ll a, b, c;
    cin >> a >> b >> c;
    if((a+b+c)%2==1){
        cout << "Impossible" << endl;
        return;
    }
    int x, y, z;
    // x+z=a  , y+x=b  , z+y=c
    /* y=b-x z+b-x=c z=c-b+x x+c-b+x=a x=a-c+b/2
     y=2b-a+c-b/2 y=b+c-a/2
     z=a+c-b/2
    */
    x = (a - c + b) / 2;
    y = (b + c - a) / 2;
    z = (a + c - b) / 2;
    if(x>-1 && y>-1 && z>-1){
        cout << x << " " << y << " " << z << endl;
        return;
    }
    cout << "Impossible" << endl;
}

//**********************************************
//------------------main begins-----------------
//**********************************************

int main(){ _

solve();

return 0;
 }