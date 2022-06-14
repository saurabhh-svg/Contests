#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test;cin>>test;
while(test--)
{
    int x, y;
    vector<string> s;
    string str;
    fl(i, 8)  {
        cin >> str;
        s.pb(str);
    }
    for (int i = 1; i <= 6;i++){
        for (int j = 1; j < 7;j++){
            if ((s[i][j] == '#' && s[i - 1][j - 1] == '#' && s[i - 1][j + 1] == '#') || s[i][j] == '#' && s[i+ 1][j - 1] == '#' && s[i +1][j + 1] == '#'){
                x = i + 1;
                y = j + 1;
            }
            
        }
    }
        cout << x << " " << y << endl;
}
return 0;
 }