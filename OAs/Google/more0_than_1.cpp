
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
int count_substrings(string &s, int n){
    vector<int> pref(n, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')
            pref[i] = -1;
        else
            pref[i] = 1;
    }

    for (int i = 1; i < n; i++) pref[i] += pref[i - 1];
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (pref[i] > 0)
            ++total;
    }
    ordered_set st;
    for (int i = 0; i < n; i++) {
        total += st.order_of_key(pref[i]);
        st.insert(pref[i]);
    }
    return total;
}
int main(){
    string s = "0111100111";
    int ans = count_substrings(s, s.size());
    cout << ans << endl;
    return 0;
}