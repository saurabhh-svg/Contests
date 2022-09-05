#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

bool canReach(vector<int> &nums)
{
    int goal = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (i + nums[i] >= goal)
            goal = i;
    }
    return goal == 0;
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int a[n], b[n];
    for (int j = 0; j < n; j++) cin >> a[j];
    
    if (s[0] == 'B'){
        cout << -1 << endl;
        return;
    }

    if (s[n - 1] == 'R')  b[n - 1] = 1;
    else   b[n - 1] = 0;

    for (int j = n - 2; j >= 0; j--) {
        if (s[j] == 'R') b[j] = b[j + 1] + 1;
        else   b[j] = b[j + 1];
    }

    int maxx = 0,temp = 0, count = 0;

    for (int j = 0; j <= n - 1; j++){
        temp = max(temp, a[j] + j);

        if (maxx == j) {
            if (b[j + 1] + j >= n - 1) {
                cout << count << endl;
                return;
            }
            if (temp <= maxx)  {
                cout << -1 << endl;
                return;
            }
            maxx = temp;
            count++;
        }
    }
    cout << count << endl;
    return;
}

signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int test;cin>>test;
while(test--) solve();
 }