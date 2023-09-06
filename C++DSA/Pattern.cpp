// rectangle pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cout << "Enter the number of row ";
//     cin >> row;
//     cout << "Enter the number of column ";
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// (2) Hollow Rectangle
// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     cin >> row >> col;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || j == 1 || i == row || j == col)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// (3) inverted half pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << n - j + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 0;
//         while (j <= i)
//         {
//             cout << i + j;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// LOVE BABBAR
// 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = n;
//         while (j <= n && j >= 1)
//         {
//             cout << j;
//             j--;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }
// 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << n - j + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// 3
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin >> n;
//      int count = 1;
//      int i = 1;
//      while (i <= n)
//      {
//          int j = 1;
//          while (j <= n)
//          {
//              cout << count << " ";
//              count = count + 1;
//              j++;
//          }
//          cout << endl;
//          i++;
//      }
//      return 0;
//  }

// 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 1;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count = count + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i - j + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i < n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             char ch = 'A' + i - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             char ch = 'A' + count;
//             cout << ch;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + n - i + j - 1;
//             cout << ch << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << "*";
//             j++;
//         }

//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = 0;
//         while (space <= i - 1)
//         {
//             cout << ' ';
//             space++;
//         }
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << i + j - 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int space = 0;
//         while (space <= n - i)
//         {
//             cout << ' ';
//             space++;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << count;
//             count = count + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int space = 0;
//         while (space <= n - i)
//         {
//             cout << ' ';
//             space++;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << j;
//             j++;
//         }
//         int start = i - 1;
//         while (start)
//         {
//             cout << start;
//             start = start - 1;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         // 1st triangle
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << j;
//             j++;
//         }
//         // 2nd triangle
//         int star1 = 1;
//         while (star1 <= i - 1)
//         {
//             cout << "*";
//             star1++;
//         }
//         // 3nd triangle
//         int star2 = 1;
//         while (star2 <= i - 1)
//         {
//             cout << "*";
//             star2++;
//         }
//         // 4th triangle
//         int z = 1;
//         while (z <= n - i + 1)
//         {
//             cout << n - i - z + 2;
//             z++;
//         }

//         cout << endl;
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
