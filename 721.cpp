#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    while (true)
    // 作为无限循环，经常在不扎堆循环次数的时候使用，并且需要在循环内使用break才会停止
    {
        // for (int j = 0; j < 100; j++)
        //{

        // while (x > 0)
        // {
        cin >> x;
        if (!x) // 如果x不为真1，则x=0,则跳出本层循环
            break;
        for (int i = 1; i < x + 1; i++)
        {
            cout << i << ' ';
        }
        cout << endl;
        // }
        //}
    }

    return 0;
}