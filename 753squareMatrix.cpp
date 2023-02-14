#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << min(min((i + 1), (j + 1)), min((n - i), (n - j)));
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}