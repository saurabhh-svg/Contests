#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
using namespace std;

void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    int a[m], b[n];
    int t[n][m],ans[100][100]={0};
    fl(i, m) cin >> a[i];  // for front
    fl(i, n) cin >> b[i];  //for left
    
    fl(i,n)   fl(j, m)   cin >> t[i][j];// for top

  for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++) {
          if (t[i][j] == 1) ans[i][j] = min(b[i], a[j]);
          else ans[i][j] = 0;
      }
        }

        for (int j = 0; j < m;j++){
            if (t[n-1][j] == 0)
                ans[n - 1][j] = 0;
                else
                 ans[n-1][j] = min(b[n-1],a[j]);
        } 
        for (int j = 0; j < n;j++){
            if (t[j][0] == 0)
                ans[j][0] = 0;
                else
                ans[j][0] = min(b[j],a[0]);
        } 

        ans[n - 1][0] = min(a[0], b[n-1]);

        fl(i, n)
        {
            fl(j, m){
                if(t[i][j]==1)
                cout << ans[i][j] << " ";
                else
                    cout << "0"
                         << " ";
            }
            cout << endl;
         } 
    }
    

int main(){
    _ solve();
    return 0;
 }

 