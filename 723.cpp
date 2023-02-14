#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    int k = 0;
    cin >> n >> m; // n行m列
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            k++;
            if (j % m == 0)
            {
                cout << "PUM";
            }
            else
            {
                cout << k << " ";
            }
        }
        cout << endl; // 每一行输出完之后换行
    }

    return 0;
}