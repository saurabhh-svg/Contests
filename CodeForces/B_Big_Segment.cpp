#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,mn,mx,l,r,index=0,flag=0;
    vector<int> left, right;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        left.pb(l);
        right.pb(r);
    }
    mn = *min_element(vr(left));
    mx = *max_element(vr(right));
   // cout << mn << " " << mx<<endl;
    
    fl(i, n)
    {
        //cout<<left[i]<<" "<<right[i]<<endl;
        if(left[i]==mn && right[i]==mx){
            flag = 1;
        index = i + 1;
        break;
        }
    }

    if (flag == 1)
        cout << index << endl;
    else
        cout << "-1" << endl;
}
int main(){ _
ll test;
    solve();
    return 0;
 }