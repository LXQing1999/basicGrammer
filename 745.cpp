#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    char w;
    cin >> w;
    double M[12][12];
    double sum = 0;
    int t = 0;
    int i, j;
    // sum   if(j>i)
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> M[i][j];

            if (j > i)
            {
                sum += M[i][j];
                t++;
            }
        }
    }
    if (w == 'S')
    {
        cout << sum << endl;
    }
    else
    {
        printf("%.1lf\n", sum / t);
    }
    return 0;
}
