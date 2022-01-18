#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n, m, r, c,flag=0,r1=0,c1=0;
    cin>>n>>m>>r>>c;
    string z;
    vector<string> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> z;
        s.pb(z);
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j <m;j++){
            if(s[i][j]=='B'){
                flag = 1;
            break;
            }
        }
    }  
    if (flag == 0)
    {
        cout << "-1" << endl;
        return;
    }

    if(s[r-1][c-1]=='B'){
        cout << "0" << endl;
    return;
    }

    for (int i = 0; i < n;i++){
        if(s[i][c-1]=='B'){
            r1 = 1;
 cout << "1" << endl;
        return;
            //break;
        }
    }
    for (int i = 0; i < m;i++){
        if(s[r-1][i]=='B'){
            c1 = 1;
            cout << "1" << endl;
        return;
            //break;
        }
    }

   // if(r1==1 || c1==1){
   //     cout << "1" << endl;
   //     return;
   // }

    cout << "2" << endl;
}
int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }