// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int product = 1;
//     int sum = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         product = product * digit;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     int answer = product - sum;
//     cout << answer << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;

//     while (n != 0)
//     {
//         // Checking last bit
//         if (n & 1)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }
//     cout << count;
//     return 0;
// }
