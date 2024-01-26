#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3;
    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;
    cout << "Enter the third number: \n";
    cin >> num3;
    float min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    cout << "The minimum of three number is: " << min;
    return 0;
}
