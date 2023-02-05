#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    double x[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%lf", &x[i]);
        if (x[i] <= 10)
        {
            printf("A[%d] = %.1lf\n", i, x[i]);
        }
    }
    return 0;
}