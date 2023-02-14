#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int y = 0;
    int x[1000];
    int min = 1001;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i] < min)
        {
            min = x[i];
            y = i;
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Position: %d\n", y);

    return 0;
}