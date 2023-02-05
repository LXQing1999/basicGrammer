#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int c;
    cin >> c;
    char w;
    cin >> w;
    double m[12][12];
    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 12; i++)
    {
        sum += m[i][c];
    }

    if (w == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else
    {
        printf("%.1lf\n", sum / 12);
    }
    return 0;
}
