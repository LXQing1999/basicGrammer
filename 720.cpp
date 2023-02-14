#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, n;
    cin >> a;
    int sum = 0;
    while (cin >> n, n <= 0) // 如果输入的n <= 0,就会一直循环
    {
    }
    sum = (a + a + n - 1) * n / 2;
    cout << sum;
    return 0;
}
// while (true)    //应该限制判断的范围，如果不能及时跳出，容易陷入死循环
// {
//     cin >> a;
//     if(n<0||n==0)
//         continue;
//     while (n > 0)
//     {
//         for (int k = n; k > 0; k--)
//         {
//             sum += a;
//             a++;
//         }

//     } break;

// }
// return 0;
