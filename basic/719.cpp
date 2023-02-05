#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x, y;
    int sum;
    for (int i = 0; i < n; i++)
    {

        cin >> x >> y;
        if (x > y)
            swap(x, y);
        // if ((x % 2) == 1)
        //     x++;
        sum = 0;
        for (int j = x + 1; j < y; j++)
        {
            if ((j % 2) != 0) // 之前的if ((j % 2) ==1)忽略了结果为-1的情况，所以会导致错误
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }

    return 0;
}