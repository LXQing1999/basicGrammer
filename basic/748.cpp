#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    char w;
    cin >> w;
    double m[12][12];
    double sum = 0;
    int t = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 1; i < 12; i++)
    {
        for (int j = 11; j >= 12 - i; j--)
        {
            sum += m[i][j];
            t++;
        }
    }

    if (w == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else
    {
        printf("%.1lf\n", sum / t);
    }

    return 0;
}