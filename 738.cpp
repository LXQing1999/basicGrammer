#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int v;
    cin >> v;
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, v);
        v = v * 2;
    }

    return 0;
}