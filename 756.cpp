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
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            q[i][j] = -1;
        }
    }
    int x = 0, y = 0; // 旧位置
    int a = x, b = y; // 新位置
    int d = 1;        // 转弯时所用元素位置
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
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
        x = a, y = b;
        print(n, m);
    }
    print(n, m);
    return 0;
}