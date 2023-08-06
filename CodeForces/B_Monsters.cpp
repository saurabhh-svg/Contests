#include <bits/stdc++.h>
#define int long long int
using namespace std;

static bool comp(const vector<int>&a,const vector<int>&b){
    if(a[0]==b[0]) return a[1] < b[1];
    else return a[0] > b[0];
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v(n);
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        if(x%k==0) v[i] = {k,i+1};
        else v[i] = {x%k, i+1};
    }
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n;i++)
        cout << v[i][1] << " ";
   cout<< endl;
}
//4,2 3,3 3,4 2,1
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
}