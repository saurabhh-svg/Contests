#include <bits/stdc++.h>
#define int long long int
using namespace std;

int dfs(vector<vector<int>> &v,int i,int j){
    if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j]==0)
        return 0;
    int temp = v[i][j];
    v[i][j] = 0;
    return temp + dfs(v, i + 1, j) + dfs(v, i - 1, j) + dfs(v, i, j+1) + dfs(v, i, j-1);
}

void solve(){
int n,m,ans=0;
cin >> n >> m;
vector<vector<int>> v(n, vector<int>(m));
for (int i = 0; i < n;i++){
    for (int j = 0; j < m;j++)
        cin >> v[i][j];
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++){
        if(v[i][j]!=0){
            int temp=dfs(v, i, j);
            ans = max(ans, temp);
        }
    }
}
cout << ans << endl;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }