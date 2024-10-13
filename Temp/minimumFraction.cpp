#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int minSubmissions(int a, int b, int x, int y)
{
    int current_gcd = gcd(a, b);
    a /= current_gcd;
    b /= current_gcd;
    int desired_gcd = gcd(x, y);
    x /= desired_gcd;
    y /= desired_gcd;

    if (x > a || y > b || x == 0 || y == 0 || a == 0)
        return -1;

    int submissions = 0;
    while (a != x || b != y)
    {
        int mul_a = (x + a - 1) / a;
        int mul_b = (y + b - 1) / b;
        int mul = max(mul_a, mul_b);
        a *= mul;
        b *= mul;
        submissions++;
    }
    return submissions;
}

int main()
{
    vector<vector<int>> tests = {{1, 2, 4, 5}, {2, 5, 1, 2}};
    for (int i = 0; i < tests.size(); ++i)
    {
        int a = tests[i][0];
        int b = tests[i][1];
        int x = tests[i][2];
        int y = tests[i][3];
        cout << minSubmissions(a, b, x, y) << " ";
    }
    return 0;
}
