#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,sum=0,c=0,op1=0,op2=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += abs(v[i]);
    }
    for (int i = 0; i < n;i++){
        c = 0;
        while (v[i] < 0)  {
            i++;
            c++;
        }
        if(c>0)
            op1++;
    }
    for (int i = 0; i < n; i++)
    {
        c = 0;
        while (v[i] > 0)
        {
            i++;
            c++;
        }
        if (c > 0)
            op2++;
    }
    cout << sum << " " << min(op1,op2) << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }