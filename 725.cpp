#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    int x = 0;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x; // 进行判断的整数 X
        if (x == 1)
        {
            cout << "1 is not perfect" << endl;
            continue;
        }
        sum = 1;
        for (int j = 2; j <= sqrt(x); j++)
        {
            if ((x % j) == 0)
            {
                sum += j;
                if (j != sqrt(x))
                    sum = sum + (x / j);
            }
        }
        if (sum == x)
        {
            cout << x << " is perfect" << endl;
        }
        else
        {
            cout << x << " is not perfect" << endl;
        }
    }

    return 0;
}