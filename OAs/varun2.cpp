#include <iostream>
#include<vector>
using namespace std;

void solve(int arr[], int n, int d){
    vector<int> newarr(n);
    while (d--)
    {
        int prev = 0;
          for (int i = 0; i < n - 1; i++){
             if (prev == 0 && arr[i + 1] == 0 || prev == 1 && arr[i + 1] == 1) newarr[i] = 0;
            else newarr[i] = 1;
            prev = arr[i];
        }
        if (prev == 0) newarr[n - 1] = 0;
        else  newarr[n - 1] = 1;
        for (int i = 0; i < n; i++) arr[i] = newarr[i];
    }
}

int main(){
    int n,d;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> d;

    solve(arr, n, d);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << endl;

    return 0;
}