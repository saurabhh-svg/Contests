#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s,str;   cin >> s; str = s;
    reverse(str.begin(), str.end());
    int l = s.length(), start = 0, end = 0, count = 0;
    while (start < l && end < l){
        if (str[start] == s[end]) {
            count++; start++; end++;
        }
        else  end++;
    }
    cout << l - count << endl;
}
int main()
{
        int test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}