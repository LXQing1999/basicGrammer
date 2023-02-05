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

        cin >> x;
        if (x == 1)
        {
            cout << "1 is not perfect" << endl;
            continue;
        }
        sum = 0;
        for (int j = 1; j * j <= x; j++)
        {

            if ((x % j) == 0)
            {
                sum += j;
                if (j != x / j && x / j < x)
                {
                    sum += x / j;
                }
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