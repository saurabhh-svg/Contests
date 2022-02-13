#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    ll n,z;
    cin >> n;
    vector<int> v;
    fl(i,n){
        cin >> z;
        v.pb(z);
    }


    // index of max from left side + index of right from right side
    ll l=0, r=n-1,ans=0,mx=-1,mn=110;
    for (int i = 0; i < n;i++){
        if(v[i]>mx){
               l = i;
                  mx = v[i];
        }

            if(v[i]<=mn){
                mn = v[i];
                r = i;
            }
                
    }
        //l = max_element(v.begin(), v.end()) - v.begin(); // from left max element
    //r = min_element(v.begin(),v.end()) - v.begin(); //from left min element

    //cout << l << " " << r << " " << endl;
    ans = (l) + (n - r - 1);

    if(l>r)
        ans=ans-1;
    cout << ans << endl;
}
int main(){
    _ solve();
    return 0;
 }