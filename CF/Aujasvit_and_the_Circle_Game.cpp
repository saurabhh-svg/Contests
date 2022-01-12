#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll m, x;
    vector<int> v;
    cin >> m >> x;
    if(m==2){
        fl(i,x){
            cout << 1 << " ";
        }
    }else{
    for (int i = 1; i <= x;i++){
        
        if (i % 2 == 1 && m % 2 == 0 )
            v.pb(i - m + 3);
            else if (i%2==0 && m%2==1 )
                v.pb(i);
                else if(i%2==0 && m%2==0 )
                    v.pb(i - m + 4);
                    else if(i%2==1 && m%2==1)
                        v.pb(i);
                            
    }
    fl(i,v.size()){
        cout<<v[i] << " ";
    }
    }
}

int main(){ _
ll test;
 cin>>test;
 while(test--){
solve();
}
return 0;
 }