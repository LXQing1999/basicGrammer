#include <iostream>
#include <cstdio>
using namespace std;

// void 返回时返回到引用它的位置
int n, m;
int t = 0;   // 第几次递归调用
int cnt = 0; // 用于路线计数
void dfind(int x, int y, int space)
{
    cnt++;
    space += 3;
    for (int i = 0; i < space; i++)
        printf(" ");
    printf("第%d次递归调用前,t=%d\n", cnt, t);
    if (x == n && y == m)
    {
        t++;
        space -= 3;
        return;
    }
    if (x < n)
    {
        for (int i = 0; i < space; i++)
            printf(" ");
        printf("x=%d < n=%d\n", x, n);
        dfind(x + 1, y, space);
    }
    if (y < m)
    {
        for (int i = 0; i < space; i++)
            printf(" ");
        printf("y=%d < m=%d\n", y, m);
        dfind(x, y + 1, space);
    }
} // return到调用它的位置，比如第21行，第26行，第35行
// 但是怎么保证每次选的路线不一样呢？要不就是向下，就是x+1，要不就是向右，就是y+1.不会重复啊
// 比如说返回了第21行，这个时候，它在返回之前，是x<n，可以选择向下x+1，执行完了返回21行，他接下来就选择y<m，向右了

int main(int argc, char const *argv[])
{
    // scanf("%d %d", &n, &m);
    cin >> n >> m;
    dfind(0, 0, 0); // 相当于使用一个递归函数反复求解
    cout << t << endl;
    return 0;
}
