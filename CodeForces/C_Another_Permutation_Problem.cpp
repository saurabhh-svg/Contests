#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n, mx = -1,sum=0;
    cin >> n;
    if (n == 2){
        cout << 2 <<endl;
        return;
    }
    vector<int> v(n);
   for(int i=0;i<n;i++) v[i] = i + 1;
   
    for (int i = 1; i < n; i++)   {
        sum = 0;
        reverse(v.begin() + i, v.end());
        vector<int> x(n);
       for(int i=0;i<n;i++) x[i] = (v[i] * (i + 1));
       for(int i=0;i<n;i++) sum += x[i];
        sum -= *max_element(x.begin(),x.end());
        mx = max(mx, sum);
        reverse(v.begin() + i, v.end());
    }
    cout << mx << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}