#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Your number for sum";
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)

    {
        sum = sum + i;
    }
    cout << "Sum of first " << n << " natural number is : " << sum;
    return 0;
}
