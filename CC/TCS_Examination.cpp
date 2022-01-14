#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll dsa1, toc1, dm1, dsa2, toc2, dm2;
    cin >> dsa1 >> toc1 >> dm1 >> dsa2 >> toc2 >> dm2;
    ll sum1 = 0, sum2 = 0;
    sum1 = dsa1 + toc1 + dm1;
    sum2 = dsa2 + toc2 + dm2;
    if (sum1 > sum2)
    {
        cout << "DRAGON" << endl;
        return;
    }
    else if(sum2>sum1){
    cout << "SLOTH" << endl;
        return;
    }
    else if(sum1==sum2){
        if(dsa1>dsa2){
            cout << "DRAGON" << endl;
        return;
        } else if(dsa2>dsa1){
           cout << "SLOTH" << endl;
        return; 
        } else if(dsa1==dsa2){
            if(toc1>toc2){
            cout << "DRAGON" << endl;
        return;
        } else if(toc2>toc1){
           cout << "SLOTH" << endl;
        return; 
        } else {
            cout << "TIE" << endl;
            return;
        }
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