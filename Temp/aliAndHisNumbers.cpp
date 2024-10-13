#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isValid(const vector<int> &subset, int num)
{
    for (int val : subset)
    {
        if (gcd(val, num) != 1)
        {
            return false;
        }
    }
    return true;
}

int MaxSubset(int N, vector<int> A)
{
    if (N == 0)
        return 0;

    set<int> uniqueElements(A.begin(), A.end());
    vector<int> sortedA(uniqueElements.begin(), uniqueElements.end());

    int size = sortedA.size();
    vector<int> subset;

    for (int num : sortedA)
    {
        if (isValid(subset, num))
        {
            subset.push_back(num);
        }
    }

    return subset.size();
}

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    cout << MaxSubset(N, A) << endl;
    return 0;
}
