#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter a 2 digit or more than 2 digit number: ";
    cin >> x;

    std::cout << "Enter a number less than the digit from above the digit: ";
    cin >> n;

    x = x / pow(10, n - 1);
    int a = (x % 10) * pow(10, n - 1);
    x = x / 10;
    int b = (x % 10) * pow(10, n);
    cout << b - a;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int A = 4;
//     int B = 2;
//     int C = 5;

//     int num1 = A * 5;
//     int num2 = B * 5;

//     int max = num1;
//     if (num2 > max)
//     {
//         max = num2;
//     }
//     cout << "the maximum amongst these is " << max;
//     return 0;
// }