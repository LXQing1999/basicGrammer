#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    for (int i = 1; i < x + 1; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}
