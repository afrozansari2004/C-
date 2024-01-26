
#include <iostream>
#include <cmath>
using namespace std;
int factorial(int p)
{
    if (p < 1)
    {
        return 1;
    }
    return p * factorial(p - 1);
}
float result(int x, int n)
{
    float calculate;
    float sum = 0;
    for (int i = 1; i < n; i++)
    {
        float calculate = (pow(x, (2 * i))) / factorial(2 * i);
        sum = sum + (pow(-1, (i))) * calculate;
    }
    return sum + x;
}
int main()
{
    int x;
    int n;
    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "The value of series is: " << result(x, n);
    return 0;
}
