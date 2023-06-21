#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n,sum=0,op=0;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        sum += abs(v[i]);
    }

    for (int i = 0; i < n;i++){
        if(v[i]<0){
            op++;
            while (i<n && v[i] <=0) i++;
        }
    }

        cout << sum << " " << op << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }