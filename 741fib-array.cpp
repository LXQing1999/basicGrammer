#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    long long f[61];
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < 60; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    } // 相当于将数列用一个数组存储起来了
    int t;
    cin >> t; // 相当于有t个测试数据
    while (t--)
    {
        int x;
        cin >> x;
        printf("Fib(%d) = %lld\n", x, f[x]);
    }
    return 0;
}
