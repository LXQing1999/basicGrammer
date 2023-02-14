#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// 正确的做法是类似斐波那契数列
int main()
{
    int a[20], n;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i <= 15; i++) // 不要管他丫的，一共就15个，肝就对了
        a[i] = a[i - 1] + a[i - 2];
    scanf("%d", &n);
    printf("%d\n", a[n]);
    return 0;
}
/*这个方法不对的主要原因是，跳台阶时，不同的顺序也计数
比如 3可化解为1、2  2、1  1、1、1  共三个，而不是全1和1 2共两个
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int cnt = 0;
    int sum = 0;
    int half = (n + 1) / 2;
    for (int i = 0; i < n + 1; i++)
    { // 一次走一步
        for (int j = 0; j < half; j++)
        { // 一次走两步
            sum = i * 1 + j * 2;
            if (sum == n)
            {
                cnt++;
            }
            else
            {
                continue; // 跳出本轮循环。继续运行
            }
                }
    } // 暴力解，一次迈一步或两步
    cout << cnt;
    return 0;
}*/