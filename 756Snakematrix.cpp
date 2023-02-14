#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int q[101][101];
void print(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << q[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            q[i][j] = -1;
        }
    }
    int n, m;
    cin >> n >> m;
    int d = 1; // d来定位所使用的dx dy中的元素
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    int x, y, a, b;
    x = y = 0; // x y是旧位置

    for (int i = 1; i < n * m + 1; i++)
    {
        q[x][y] = i;
        a = x + dx[d];
        b = y + dy[d];
        if (a < 0 || b < 0 || a >= n || b >= m || q[a][b] != -1)
        {
            d = (d + 1) % 4;
            a = x + dx[d];
            b = y + dy[d];
        }
        x = a;
        y = b; // a b是更新后的位置
        print(n, m);
    }
    print(n, m);
    return 0;
}