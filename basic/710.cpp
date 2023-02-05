#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    if ((x % 2) == 1)
    {
        cout << x << endl;
        for (int i = 0; i < 5; i++)
        {
            x = x + 2;
            cout << x << endl;
        }
    }
    else
    {
        cout << x + 1 << endl;
        x = x + 1;
        for (int i = 0; i < 5; i++)
        {
            x = x + 2;
            cout << x << endl;
        }
    }

    return 0;
}