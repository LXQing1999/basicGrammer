#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;
    int max = -1;
    for (int i = 1; i < min(x, y) + 1; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            if (i > max)
            {
                max = i;
            }
        }
    }
    cout << max;
    return 0;
}
