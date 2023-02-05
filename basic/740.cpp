#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n[20];
    int a, t;
    int temp;
    for (int i = 0; i < 20; i++)
    {
        cin >> n[i];
        // cout << n[i] << " ";
    }
    for (int i = 0; i < 10; i++)
    {
        temp = n[i];
        t = n[abs(20 - i - 1)];
        n[20 - i - 1] = temp;
        n[i] = t;
    }
    // for (int i = 10; i < 20; i++)
    // {
    //     temp = n[i];
    //     t = n[abs(20 - i - 1)];
    //     n[20 - i] = temp;
    //     n[i] = t;
    // }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}