#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,ans=0;
    cin >> n;
    int a[4][4]={0};
    for (int i = 1; i <= 3;i++){
        for (int j = 1; j <= 3;j++)
            cin >> a[i][j];
    }
    ll rem1 = n - a[1][1];
      ll rem2 = n - a[2][2];
        ll rem3 = n - a[3][3];

        ans = max(rem1 , max(rem2, rem3));
        // ans = max(n-a[1][1],max(n-a[2][2],n-a[3][3])) ;
        cout<< ans << endl;

}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }