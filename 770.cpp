#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    while (cin >> a[i]) // 输入直到回车结束
        i++;
    for (int k = 0; k < i - 2; k++)
    {
        if (a[k] == a[i - 2])
        {
            cout << a[i - 1];
        }
        else
        {
            cout << a[k];
        }
        cout << " ";
    }
    return 0;
}
