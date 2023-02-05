#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, max, k, maxk;
    max = 0;
    k = 0; // 表示数字的输入位置
    maxk = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> n;
        k++;
        if (n > max)
        {
            swap(n, max);
            maxk = k;
        }
    }
    cout << max << endl;
    cout << maxk << endl;

    return 0;
}