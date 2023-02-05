#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        bool is_prime = true; // 初始化判断数组
        cin >> x;
        if (x == 1)
            cout << x << " is not prime" << endl;
        else
        {
            int i;
            for (i = 2; i <= x / i; i++) // x/i的判断条件是因为两侧的数（除数和商）时对称的，所以只用考虑一半即可，还可以降低复杂度
            {
                if (x % i == 0)
                {
                    is_prime = false;
                    break;
                }
                else
                    is_prime = true;
            }
            if (is_prime) // 如果prime始终是true，可以输出
                cout << x << " is prime" << endl;
            else
                cout << x << " is not prime" << endl;
        }
    }
    return 0;
}

// #include <iostream>
// #include <cstdio>
// #include <math.h>
// #include <algorithm>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         bool prime = true;
//         if (x == 1)
//         {
//             cout << x << " is not prime" << endl;
//         }
//         else
//         {
//             for (int j = 2; j <= x / j; j++)
//             {

//                 if ((x % j) == 0)
//                 {
//                     prime = false;
//                     break;
//                 }else{
//                     prime = true;
//                 }
//                 if (!prime)
//                 {
//                     cout << x << " is not prime" << endl;
//                 }
//                 else
//                 {
//                     cout << x << " is prime" << endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }