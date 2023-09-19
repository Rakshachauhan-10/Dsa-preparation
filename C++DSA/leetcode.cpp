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

// REVERSE INTEGER
// #include <iostream>
// using namespace std;
// int main()
// {
//     // digit = n%10;
//     // ans = ans*10+ digit
//     int n;
//     cin >> n;
//     int ans = 0;

//     while (n != 0)
//     {
//         int digit = n % 10;
//         if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
//         {
//             return 0;
//         }

//         ans = ans * 10 + digit;
//         n = n / 10;
//     }
//     cout << ans << endl;
//     return 0;
// }

// compliment of base 10 ingeter
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int m = n;
//     int mask = 0;
//     // edge case
//     if (n == 0)
//     {
//         return 1;
//     }
//     while (m != 0)
//     {
//         mask = (mask << 1) | 1;
//         m = m >> 1;
//     }
//     int ans = (~n) & mask;
//     cout << ans << endl;
//     return 0;
// }

// Power of two
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return 0;
}