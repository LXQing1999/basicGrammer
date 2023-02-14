#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    int sum = 0;
    cin >> x >> y;
    if (x > y)
    {
        swap(x, y);
    }
    for (int i = x + 1; i < y; i++)
    {
        if ((i % 2) == 1) // if (（i % 2）==1)要加上括号别动了，我调一下设置
        // 判断i除以2的余数是否为零，不为零就执行if内的语句，如果余数为零，就不执行if内的语句。
        // 知道了，因为
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}