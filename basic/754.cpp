#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int k = 1;
    int row = 1;
    int a[101][101];
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                a[i][j] = abs(j - i) + 1;
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        row++;
        k = row;
        cout << endl;
    }

    return 0;
}
