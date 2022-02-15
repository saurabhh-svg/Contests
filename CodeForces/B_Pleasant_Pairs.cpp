#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n, ans = 0;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = a[i] - i; j <= n; j += a[i])  {
            if (j >= 0)
                if (a[i] * a[j] == i + j && i < j)
                    ans++;
        }
    }
    cout << ans << endl;
}

//===========MAIN BEGIN===========

int main(){ _ fs
ll test;
 cin>>test;
 while(test--)
solve();
return 0;
 }