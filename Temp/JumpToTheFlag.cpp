#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int selectStock(int saving, vector<int> currentValue, vector<int> futureValue)
{
    int n = currentValue.size();
    vector<pair<int, int>> diff(n);
    for (int i = 0; i < n; ++i)
        diff[i] = make_pair(futureValue[i] - currentValue[i], i);
    sort(diff.rbegin(), diff.rend());

    int profit = 0;
    for (int i = 0; i < n; ++i)
    {
        int idx = diff[i].second;
        int currentPrice = currentValue[idx];
        int futurePrice = futureValue[idx];
        if (currentPrice <= saving) {
            profit += futurePrice - currentPrice;
            saving -= currentPrice;
        }
    }
    return profit;
}

int main()
{
    int saving = 250;
    vector<int> currentValue = {175, 133, 109, 210, 97};
    vector<int> futureValue = {200, 125, 128, 228, 133};
    cout << selectStock(saving, currentValue, futureValue) << endl;
    return 0;
}
