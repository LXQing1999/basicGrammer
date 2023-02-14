#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int get_unique_count(int a[], int n)
{
    int b[1001]; // 上面只申请了1001个格子
    // for (int i = 0; i < 1001; i++) // 下面这里，从0~1001，总共有1001个数，空间怎么可能够用，所以溢出了，你是脑子糊涂了？
    for (int i = 0; i < 1001; i++)
    {
        b[i] = 0;
    }
    int k = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        k = a[i];
        b[k]++;
    }
    for (int i = 0; i < 1001; i++) // 一样的问题
    {
        if (b[i] != 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    get_unique_count(a, n);
    return 0;
}
