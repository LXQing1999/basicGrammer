#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < 11; i++)
    {
        sum = i * n;
        printf("%d x %d = %d\n", i, n, sum);
    }

    return 0;
}