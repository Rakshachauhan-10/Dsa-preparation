#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value od b " << endl;
    cin >> b;

    char op;
    cout << "Enter the opetion u want to perform" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "please enter a valid operation" << endl;
    }
    return 0;
}