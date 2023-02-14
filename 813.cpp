#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 100;
void print2D(int a[][N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int row, col;
    int a[100][100];
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    print2D(a, row, col);
    return 0;
}
