// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int answer = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         answer = (bit * pow(10, i) + answer);
//         n = n >> 1;
//         i++;
//     }
//     cout << answer;
//     return 0;
// }

// stored negative number
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int decimalToBinary(int n);
//     if (n < 0)
//     {
//         // if number is negative
//         n = n * (-1);
//         int ans = decimalToBinary(n);
//         // Find 2's compliment of the number
//         // 1's comp
//         int Ans = (~ans);
//         // 2's comp
//         Ans = Ans + 1;
//         cout << Ans << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     int ans = 0;

//     while (n != 0)
//     {
//         int digit = n % 10;
//         if (digit == 1)
//         {
//             ans = ans + pow(2, i);
//         }
//         n = n / 10;
//         i++;
//     }
//     cout << ans << endl;
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
    return 0;
}