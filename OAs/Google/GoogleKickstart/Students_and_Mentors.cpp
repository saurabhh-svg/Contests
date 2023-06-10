#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

void solve(int t){
    int n;cin >> n;
    vector<int> v(n),v1(n), ans(n,-1);

    for (int i = 0; i < n; i++) cin >> v[i];
    
    v1 = v;  sort(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < n;j++){
            if(v1[j]<=2*v[i] && v1[j]!=v[i] )  ans[i] = v1[j];
        }
    }
        cout << "Case #" << t << ": ";
    for (auto i : ans) cout << i << " ";
    cout << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    for (int i = 1; i <= test; i++)
        solve(i);
    return 0;
}