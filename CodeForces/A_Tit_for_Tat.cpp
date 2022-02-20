#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define pi 3.141592653589793238
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    fl(i, n) cin >> v[i];

    fl(i,n-1) {
        if (v[i] < k) {
            k -= v[i];
            v[n - 1] += v[i];
            v[i] = 0;
        }
        else{
            v[i] -= k;
            v[n - 1] += k;
            k = 0;
        }
    }

        fl(i, n) cout << v[i] << " ";
        cout << endl;
    
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}