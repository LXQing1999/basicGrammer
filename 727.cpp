#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int t = 1;         // 计数*号
    int space = n / 2; // 计数空格
    int T = t;
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < abs(space); j++)
        {
            cout << " ";
        }
        space = space - 1;

        if (t > n)
        {
            for (int i = 0; i < (n - (t % n)); i++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int i = 0; i < t; i++)
            {
                cout << "*";
            }
        }
        t = t + 2;
        /*
        for (int i = 0; i < T; i++)
        {
            cout << "*";
        }
        t = t + 2;
        T = t;
        if (T> n)
        {
            T = n - (t % n);
        }*/

        cout << endl;
    }

    return 0;
}