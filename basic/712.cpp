#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;
    for (int i = 0; i < 6; i++)
    {
        double n;
        cin >> n;
        if (n > 0)
        {
            x++;
        }
    }
    cout << x << " positive numbers" << endl;

    return 0;
}