#include <iostream>
#include <cmath> // Use cmath instead of math.h
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int originaln = n;
//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         sum += pow(lastdigit, 3);
//         n = n / 10;
//     }
//     if (sum == originaln)
//     {
//         cout << "Armstrong number" << endl; // Capitalize "Armstrong"
//     }
//     else
//     {
//         cout << "Not Armstrong" << endl; // Capitalize "Armstrong"
//     }
//     return 0;
// }
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, sum = 0, original, remainder, digits = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Store the input number in a variable
    original = n;

    // Count the number of digits in the input number
    while (original != 0)
    {
        digits++;
        original /= 10;
    }

    // Compute the sum of cubes of each digit
    original = n;
    while (original != 0)
    {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    // Check if the sum is equal to the input number
    if (sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;

    return 0;
}
