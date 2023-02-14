#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int k = 1;
    int row = 1;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << k << " ";
                k = k * 2;
            }
            row = row * 2;
            k = row;
            cout << endl;
        }
        row = 1;
        k = 1;
        cout << endl;
    }
    return 0;
}
