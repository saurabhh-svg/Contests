#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = n*(n+1)/2;
    for (int i = 1; i <= n; ++i){
        int temp = count;
        for (int j = 1; j <= i; ++j){
            if (i % 2 == 0) {
                cout << temp << " ";
                temp -= (n - j);
            }  else {
                cout << temp << " ";
                temp -= j;
            }
        }
        cout << endl;
        count++;
    }

    return 0;
}
