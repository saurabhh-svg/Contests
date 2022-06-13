#include <bits/stdc++.h>
#include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
 using namespace std;
 using namespace __gnu_pbds;

 int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll test;cin >> test;
     while(test--){
     ll a, b;
     cin >> a >> b;
     ll ans = abs(a - b);
     set<int> s;
     for (int i = 1; i * i <= ans; i++) {
         if (!(ans % i))    {
             if (i == ans / i)    s.insert(i);
             else {
                 s.insert(i);  s.insert(ans / i);
             }
         }
     }
     ans = s.size();
     cout << ans << "\n";
 }
 return 0;
 }

 // 5 5  3 1 2