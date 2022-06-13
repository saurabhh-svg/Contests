#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test;
    cin >> test;
    while (test--) {
        ll a, b,x,y, ans = 0;
        cin >> a >> b;
        x = min(a, b);
        y = max(a, b);
        if (a == b) ans = a;
        else if(a==0 || b==0)
            ans = -1;
        else
        {
            while (x*2<=y){
                x *= 2;
                ans++; 
            } ll diff = y - x;
            if(diff>0)  ans += 2*diff + ( x- diff) + 1;
            else ans += x;
        }
        cout << ans << "\n";
    }
    return 0;
}
