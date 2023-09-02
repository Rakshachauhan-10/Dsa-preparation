#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 0;
    }
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << originaln << " is an Armstrong number" << endl;
    }
    else
    {
        cout << originaln << " is not an Armstrong number" << endl;
    }
    return 0;
}
