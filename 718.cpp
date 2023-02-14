#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    int x = 0;
    char y = 0;
    int sum = 0;
    int sumc = 0;
    int sumr = 0;
    int sumf = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        sum += x;
        if (y == 'C')
        {
            sumc += x;
        }
        else if (y == 'R')
        {
            sumr += x;
        }
        else
        {
            sumf += x;
        }
    }
    double pc, pr, pf = 0;
    pc = sumc * 100.0 / sum;
    // 注意此处如果sumc / sum结果是int类型的，但如果×了浮点数就会强制转换成浮点数形式表示
    pr = sumr * 100.0 / sum;
    pf = sumf * 100.0 / sum;
    printf("Total: %d animals\n", sum);
    printf("Total coneys: %d\n", sumc);
    printf("Total rats: %d\n", sumr);
    printf("Total frogs: %d\n", sumf);
    printf("Percentage of coneys: %.2lf %%\n", pc);
    printf("Percentage of rats: %.2lf %%\n", pr);
    printf("Percentage of frogs: %.2lf %%\n", pf);
    return 0;
}